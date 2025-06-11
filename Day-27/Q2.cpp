#include <iostream>
#include <vector>
using namespace std;

// Recursion = O(2^n)
int countWaysRec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return countWaysRec(n - 1) + countWaysRec(n - 2);
}

// Memorization = O(n)
int countWaysMem(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = countWaysMem(n - 1, dp) + countWaysMem(n - 2, dp);
    return dp[n];
}

// Tabulation = O(n)
int countWayTab(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    int n = 5;

    // Recursion
    cout << "Recursion result: " << countWaysRec(n) << endl;

    // Memorization
    vector<int> dp(n + 1, -1);
    cout << "Memorization result: " << countWaysMem(n, dp) << endl;

    // Tabulation
    cout << "Tabulation result: " << countWayTab(n) << endl;

    return 0;
}