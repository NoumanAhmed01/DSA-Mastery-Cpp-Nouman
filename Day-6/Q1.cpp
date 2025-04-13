// Pass by value and Pass by reference.

#include <iostream>
using namespace std;

int passByvalue(int a)
{
    a = 20;
    cout << "In Function : " << a << endl;
}
int passByref(int *a)
{
    *a = 20;
    cout << "In Function : " << *a << endl;
}
int main()
{
    int a = 10;
    cout << "Before : " << a << endl;
    passByvalue(a);
    cout << "After pass by value : " << a << endl;
    passByref(&a);
    cout << "After pass by reference : " << a << endl;

    return 0;
}