// Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

int largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " is Greater";
    }
    else if (b > a && b > c)
    {
        cout << b << " is Greater";
    }
    else
        cout << c << " is Greater";
}

int main()
{
    largest(23, 32, 62);
    return 0;
}