#include <iostream>
#include <vector>
using namespace std;

int feb(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return feb(n - 1) + feb(n - 2);
}

// Using Dynamic Programing
int febDP(int n, vector<int> &f)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (f[n] != -1)
    {
        return f[n];
    }

    f[n] = febDP(n - 1, f) + febDP(n - 2, f);
}

int main()
{
    int n = 6;
    vector<int> f(n + 1, -1);
    cout << febDP(n, f);

    return 0;
}