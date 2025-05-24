// ✅ 2. Maze Solver
#include <iostream>
#include <vector>
using namespace std;
bool isSafeMaze(vector<vector<int>> &maze, int x, int y)
{
    return (x >= 0 && x < maze.size() && y >= 0 && y < maze[0].size() && maze[x][y] == 1);
}

bool solveMazeUtil(vector<vector<int>> &maze, int x, int y, vector<vector<int>> &sol)
{
    int N = maze.size();
    if (x == N - 1 && y == N - 1)
    {
        sol[x][y] = 1;
        return true;
    }
    if (isSafeMaze(maze, x, y))
    {
        sol[x][y] = 1;
        if (solveMazeUtil(maze, x + 1, y, sol))
            return true;
        if (solveMazeUtil(maze, x, y + 1, sol))
            return true;
        sol[x][y] = 0;
    }
    return false;
}

void printMazeSolution(const vector<vector<int>> &sol)
{
    for (const auto &row : sol)
    {
        for (int val : row)
            cout << val << " ";
        cout << "\n";
    }
}

int main()
{
    // Maze Solver
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}};
    vector<vector<int>> sol(4, vector<int>(4, 0));
    if (solveMazeUtil(maze, 0, 0, sol))
    {
        cout << "Maze Solution:\n";
        printMazeSolution(sol);
    }
    else
        cout << "No path found in maze.\n";

    cout << "\n";
}