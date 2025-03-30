// Question 1 : Write a C++ program to get a number from the user and print whether it's positive, negative or zero.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter number to check:";
    cin >> a;
    if (a > 0)
    {
        cout << "Number is Positive";
    }
    else if (a < 0)
    {
        cout << "Number is Negative";
    }
    else
    {
        cout << "Number is Zero";
    }
    return 0;
}