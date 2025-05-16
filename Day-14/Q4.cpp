// Friend Function

#include <iostream>
using namespace std;

class Box
{
private:
    int length;

public:
    Box() { length = 10; }

    friend void printLength(Box b);
};

void printLength(Box b)
{
    cout << "Length is: " << b.length << endl;
}

int main()
{
    Box b;
    printLength(b);
}
