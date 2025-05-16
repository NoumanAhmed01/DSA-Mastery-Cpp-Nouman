// Pure Virtual Function

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle\n";
    }
};

int main()
{
    Circle c;
    c.draw();
}
