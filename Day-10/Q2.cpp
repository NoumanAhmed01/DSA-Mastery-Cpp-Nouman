#include <iostream>
using namespace std;

int main()
{
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    cout << "a = " << a << " (Binary: 0101)" << endl;
    cout << "b = " << b << " (Binary: 0011)" << endl;
    cout << "-----------------------------" << endl;

    // Bitwise AND
    cout << "a & b = " << (a & b) << " (Binary: 0001)" << endl;

    // Bitwise OR
    cout << "a | b = " << (a | b) << " (Binary: 0111)" << endl;

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << " (Binary: 0110)" << endl;

    // Bitwise NOT (on a)
    cout << "~a = " << (~a) << " (Inverted bits of a)" << endl;

    // Bitwise NOT (on b)
    cout << "~b = " << (~b) << " (Inverted bits of b)" << endl;

    // Left Shift (a << 1)
    cout << "a << 1 = " << (a << 1) << " (Binary: 1010)" << endl;

    // Right Shift (a >> 1)
    cout << "a >> 1 = " << (a >> 1) << " (Binary: 0010)" << endl;

    // Left Shift (b << 1)
    cout << "b << 1 = " << (b << 1) << " (Binary: 0110)" << endl;

    // Right Shift (b >> 1)
    cout << "b >> 1 = " << (b >> 1) << " (Binary: 0001)" << endl;

    return 0;
}
