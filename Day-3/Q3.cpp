// Print Half pyramid
// Note: try to cout i and j and * one by one to see the change.
// Try for character printing instead of numbers

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}