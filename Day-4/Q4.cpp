// Write a function to calculate the sum of digits of a number.

#include <iostream>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << "Sum of digit is :" << sum;
}

int main()
{
    digitSum(4562121);
    return 0;
}