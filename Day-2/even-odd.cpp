#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Enter number to check weather its even or odd" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Number is even: " << a << endl;
    }
    else
        cout << "Number is odd:" << a << endl;

    return 0;
}