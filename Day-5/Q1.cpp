// Program to convert Binary to Decimal and Decimal to Binary.

#include <iostream>
using namespace std;

int binaryToDecimal(int binNum)
{
    int n = binNum;
    int pow = 1;
    int decNum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        decNum += lastDigit * pow;
        pow = pow * 2;
        n = n / 10;
    }
    return decNum;
}

int decimalToBinary(int decNum)
{
    int n = decNum;
    int binNum = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    return binNum;
}

int main()
{
    cout << binaryToDecimal(1010) << endl; // Should print 10
    cout << decimalToBinary(10) << endl;   // Should print 1010
    return 0;
}