// Write a function which takes 2 numbers as parameters (a & b) and outputs : a ^ 2 + b ^ 2 + 2 * ab.

#include <iostream>
using namespace std;

int abSquare(int a, int b)
{
    return a * a + b * b + 2 * a * b;
}

int main()
{
    cout << abSquare(3, 2);
    return 0;
}