🔹 What is a Graph?
A graph is a collection of nodes (vertices) connected by edges. It can be:

Undirected: edges go both ways

Directed: edges go one way only

🔹 Representing a Graph in C++
Use an adjacency list (vector<list<int>>) for efficient representation.

🔹 Key Operations Covered:

Add Edge – Connect nodes in undirected or directed fashion

Print Graph – Show adjacency list

BFS Shortest Path – Uses queue to find minimum distance from source node

Cycle Detection

Undirected: Check if a node is revisited not via its parent

Directed: Detect back edge using recursion stack

Connected Components – Count how many disconnected parts the graph has

Topological Sort – For Directed Acyclic Graphs (DAGs); linear ordering of tasks
