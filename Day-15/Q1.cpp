// Find X to the power N. Using Optimize solution.
#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int halfpow = pow(x, n / 2);
    int halfpowsqure = halfpow * halfpow;
    if (n % 2 != 0)
    {
        return x * halfpowsqure;
    }
    return halfpowsqure;
}

int main()
{
    cout << pow(2, 7);
    return 0;
}