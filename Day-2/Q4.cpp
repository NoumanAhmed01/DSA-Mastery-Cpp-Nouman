// Question 2 : Print the some of digits of a number using while loop.

#include <iostream>
using namespace std;

int main()
{
    int digit, sumdigit = 0;
    cout << "Enter number to some the digit:";
    cin >> digit;
    while (digit > 0)
    {
        int lastdigit = digit % 10;
        sumdigit += lastdigit;
        digit = digit / 10;
    }
    cout << "Sum of digit is:" << sumdigit;

    return 0;
}