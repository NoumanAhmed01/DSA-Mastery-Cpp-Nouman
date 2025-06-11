#include <iostream>
#include <list>
#include <utility> // For pair
using namespace std;

class WeightedGraph
{
    int V;
    list<pair<int, int>> *l; // Stores (neighbor, weight)
public:
    WeightedGraph(int V)
    {
        this->V = V;
        l = new list<pair<int, int>>[V];
    }

    // Add an edge from u to v with weight 'w'
    void addEdge(int u, int v, int w)
    {
        l[u].push_back({v, w});
        l[v].push_back({u, w}); // Undirected graph
    }

    void print()
    {
        for (int u = 0; u < V; u++)
        {
            cout << u << " -> ";
            for (auto neighbor : l[u])
            {
                int v = neighbor.first;
                int w = neighbor.second;
                cout << "(" << v << ", " << w << ") ";
            }
            cout << endl;
        }
    }
};

int main()
{
    WeightedGraph g(4);
    g.addEdge(0, 1, 10); // Edge 0-1 with weight 10
    g.addEdge(1, 2, 20); // Edge 1-2 with weight 20
    g.addEdge(2, 3, 30); // Edge 2-3 with weight 30
    g.addEdge(3, 0, 40); // Edge 3-0 with weight 40

    g.print();
    return 0;
}