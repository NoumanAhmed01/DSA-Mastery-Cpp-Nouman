// ✅ 1. Sudoku Solver
#include <iostream>
#include <vector>
using namespace std;

bool isSafeSudoku(vector<vector<int>> &board, int row, int col, int num)
{
    for (int x = 0; x < 9; x++)
    {
        if (board[row][x] == num || board[x][col] == num ||
            board[3 * (row / 3) + x / 3][3 * (col / 3) + x % 3] == num)
            return false;
    }
    return true;
}

bool solveSudoku(vector<vector<int>> &board)
{
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (board[row][col] == 0)
            {
                for (int num = 1; num <= 9; num++)
                {
                    if (isSafeSudoku(board, row, col, num))
                    {
                        board[row][col] = num;
                        if (solveSudoku(board))
                            return true;
                        board[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void printSudoku(const vector<vector<int>> &board)
{
    for (const auto &row : board)
    {
        for (int num : row)
            cout << num << " ";
        cout << "\n";
    }
}

int main()
{
    // Sudoku
    vector<vector<int>> sudoku = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    if (solveSudoku(sudoku))
    {
        cout << "Solved Sudoku:\n";
        printSudoku(sudoku);
    }
    else
        cout << "No solution for Sudoku.\n";

    cout << "\n";
    return 0;
}
