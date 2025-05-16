#include <iostream>
using namespace std;

class Print
{
public:
    void show(int a)
    {
        cout << "Integer: " << a << endl;
    }

    void show(double d)
    {
        cout << "Double: " << d << endl;
    }

    void show(string s)
    {
        cout << "String: " << s << endl;
    }
};

int main()
{
    Print p;
    p.show(5);
    p.show(5.5);
    p.show("Nouman");
    return 0;
}
