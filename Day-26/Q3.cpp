#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int V;
    bool directed;
    vector<list<int>> adj;

public:
    Graph(int V, bool isDirected = false)
    {
        this->V = V;
        this->directed = isDirected;
        adj.resize(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        if (!directed)
        {
            adj[v].push_back(u);
        }
    }

    void printGraph()
    {
        cout << "\nAdjacency List:\n";
        for (int i = 0; i < V; i++)
        {
            cout << i << " -> ";
            for (int neighbor : adj[i])
            {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    bool detectCycleUndirectedUtil(int node, vector<bool> &visited, int parent)
    {
        visited[node] = true;
        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                if (detectCycleUndirectedUtil(neighbor, visited, node))
                    return true;
            }
            else if (neighbor != parent)
            {
                return true;
            }
        }
        return false;
    }

    bool detectCycleUndirected()
    {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (detectCycleUndirectedUtil(i, visited, -1))
                    return true;
            }
        }
        return false;
    }

    bool detectCycleDirectedUtil(int node, vector<bool> &visited, vector<bool> &recStack)
    {
        visited[node] = true;
        recStack[node] = true;

        for (int neighbor : adj[node])
        {
            if (!visited[neighbor] && detectCycleDirectedUtil(neighbor, visited, recStack))
                return true;
            else if (recStack[neighbor])
                return true;
        }

        recStack[node] = false;
        return false;
    }

    bool detectCycleDirected()
    {
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (detectCycleDirectedUtil(i, visited, recStack))
                    return true;
            }
        }
        return false;
    }

    void DFSUtil(int node, vector<bool> &visited)
    {
        visited[node] = true;
        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                DFSUtil(neighbor, visited);
            }
        }
    }

    int countConnectedComponents()
    {
        vector<bool> visited(V, false);
        int count = 0;
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                DFSUtil(i, visited);
                count++;
            }
        }
        return count;
    }

    void shortestPathBFS(int src)
    {
        vector<int> dist(V, -1);
        queue<int> q;

        dist[src] = 0;
        q.push(src);

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (int neighbor : adj[node])
            {
                if (dist[neighbor] == -1)
                {
                    dist[neighbor] = dist[node] + 1;
                    q.push(neighbor);
                }
            }
        }

        cout << "\nShortest distances from node " << src << ":\n";
        for (int i = 0; i < V; i++)
        {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
    }

    void topologicalSort()
    {
        vector<int> inDegree(V, 0);
        for (int i = 0; i < V; i++)
        {
            for (int neighbor : adj[i])
            {
                inDegree[neighbor]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        vector<int> topoOrder;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            topoOrder.push_back(node);

            for (int neighbor : adj[node])
            {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0)
                {
                    q.push(neighbor);
                }
            }
        }

        if (topoOrder.size() != V)
        {
            cout << "\nGraph contains a cycle. Topological sort not possible.\n";
        }
        else
        {
            cout << "\nTopological Order: ";
            for (int node : topoOrder)
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }
};

// Main Function
int main()
{
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;

    bool isDirected;
    cout << "Is the graph directed (1 for Yes / 0 for No)? ";
    cin >> isDirected;

    Graph g(V, isDirected);

    cout << "Enter number of edges: ";
    cin >> E;

    cout << "Enter " << E << " edges (u v):\n";
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    g.printGraph();

    if (isDirected)
    {
        cout << "\nCycle Detection (Directed): " << (g.detectCycleDirected() ? "Yes" : "No") << endl;
        g.topologicalSort();
    }
    else
    {
        cout << "\nCycle Detection (Undirected): " << (g.detectCycleUndirected() ? "Yes" : "No") << endl;
        cout << "Connected Components: " << g.countConnectedComponents() << endl;
    }

    int src;
    cout << "\nEnter source node for shortest path: ";
    cin >> src;
    g.shortestPathBFS(src);

    return 0;
}
