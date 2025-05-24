#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isSafeNQ(int row, int col, unordered_set<int> &usedRows,
              unordered_set<int> &usedUpperDiag, unordered_set<int> &usedLowerDiag)
{
    return !usedRows.count(row) &&
           !usedUpperDiag.count(row - col) &&
           !usedLowerDiag.count(row + col);
}

bool solveNQUtil(vector<vector<int>> &board, int col, int N,
                 unordered_set<int> &usedRows,
                 unordered_set<int> &usedUpperDiag,
                 unordered_set<int> &usedLowerDiag,
                 bool findAll = false)
{
    if (col >= N)
    {
        return true; // Return true to stop after first solution
    }
    for (int i = 0; i < N; i++)
    {
        if (isSafeNQ(i, col, usedRows, usedUpperDiag, usedLowerDiag))
        {
            board[i][col] = 1;
            usedRows.insert(i);
            usedUpperDiag.insert(i - col);
            usedLowerDiag.insert(i + col);

            if (solveNQUtil(board, col + 1, N, usedRows, usedUpperDiag, usedLowerDiag, findAll))
            {
                if (!findAll)
                    return true;
            }

            // Backtrack
            board[i][col] = 0;
            usedRows.erase(i);
            usedUpperDiag.erase(i - col);
            usedLowerDiag.erase(i + col);
        }
    }
    return false;
}

void printNQueens(const vector<vector<int>> &board)
{
    for (const auto &row : board)
    {
        for (int cell : row)
            cout << (cell ? "Q " : ". ");
        cout << "\n";
    }
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "Invalid N.\n";
        return 0;
    }

    vector<vector<int>> board(N, vector<int>(N, 0));
    unordered_set<int> usedRows, usedUpperDiag, usedLowerDiag;

    if (solveNQUtil(board, 0, N, usedRows, usedUpperDiag, usedLowerDiag))
    {
        cout << "Solution for " << N << "-Queens:\n";
        printNQueens(board);
    }
    else
    {
        cout << "No solution exists for " << N << "-Queens.\n";
    }

    return 0;
}