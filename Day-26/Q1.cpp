#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int V;        // Number of vertices
    list<int> *l; // Adjacency list
public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V]; // Dynamic allocation for V lists
    }

    // Add an edge between u and v (undirected graph)
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u); // For directed graphs, remove this line
    }

    void BFS()
    {
        queue<int> q;
        vector<bool> vis(V, false);
        q.push(0);
        vis[0] = true;
        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();
            cout << u << " ";

            list<int> neighbour = l[u];
            for (int v : neighbour)
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    void DFS(int u, vector<bool> &vis)
    {
        vis[u] = true;
        cout << u << " ";
        list<int> neighbour = l[u];
        for (int v : neighbour)
        {
            if (!vis[v])
            {
                DFS(v, vis);
            }
        }
    }

    bool pathHelper(int source, int des, vector<bool> &vis)
    {
        if (source == des)
        {
            return true;
        }
        vis[source] = true;
        list<int> neighbour = l[source];
        for (int v : neighbour)
        {
            if (!vis[v])
            {
                if (pathHelper(v, des, vis))
                {
                    return true;
                }
            }
        }
        return false;
    }

    bool hasPath(int source, int des)
    {
        vector<bool> vis(V, false);
        return pathHelper(source, des, vis);
    }

    // Print the adjacency list
    void print()
    {
        for (int u = 0; u < V; u++)
        {
            cout << u << " -> ";
            for (int v : l[u])
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph graph(7); // Create a graph with 5 vertices (0 to 4)

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);

    vector<bool> vis(7, false);
    cout << (graph.hasPath(0, 5) ? "Yes" : "No") << endl;

    return 0;
}