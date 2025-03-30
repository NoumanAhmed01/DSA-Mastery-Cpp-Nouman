// Question 5 : For any 3 digit number check whether it’s an Armstrong number or not.Armstrong number is a number that is equal to the sum of cubes of its digits.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;

    int num = n; // Creating a copy

    int dig1 = num % 10; // Extract last digit
    num /= 10;           // Remove last digit
    int dig2 = num % 10; // Extract second digit
    num /= 10;           // Remove second digit
    int dig3 = num % 10; // Extract first digit

    int cubeSum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;

    if (cubeSum == n)
    {
        cout << n << " is an Armstrong Number\n";
    }
    else
    {
        cout << n << " is NOT an Armstrong Number\n";
    }

    return 0;
}
