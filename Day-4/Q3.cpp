// Write a function to check if a number is a palindrome in C++.(121 is a palindrome, 321 is not).

#include <iostream>
using namespace std;

int reverse(int n)
{
    int res = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        res = res * 10 + lastDig;
        n = n / 10;
    }
    return res;
}

bool isPalindrome(int num)
{
    int revNum = reverse(num);
    if (num == revNum)
    {
        cout << "Number is Palindrome" << endl;
        return true;
    }
    else
    {
        cout << "Not Palindrome" << endl;
        return false;
    }
}

int main()
{
    isPalindrome(343);
    return 0;
}
