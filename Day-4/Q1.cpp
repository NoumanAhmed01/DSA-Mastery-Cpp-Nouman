// Program to add, Product, and Factorial of a number.

#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "Addition is :" << a + b << endl;
}
int prod(int a, int b)
{
    cout << "Product is :" << a * b << endl;
}
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    cout << "Factorial is :" << fact;
}

int main()
{
    add(2, 5);
    prod(2, 3);
    factorial(6);
    return 0;
}