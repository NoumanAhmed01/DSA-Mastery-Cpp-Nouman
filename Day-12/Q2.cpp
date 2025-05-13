#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating food\n";
    }
};

class Bird
{
public:
    void fly()
    {
        cout << "Flying in the sky\n";
    }
};

class Bat : public Animal, public Bird
{
public:
    void hangUpsideDown()
    {
        cout << "Hanging upside down\n";
    }
};

int main()
{
    Bat b;
    b.eat();            // Inherited from Animal
    b.fly();            // Inherited from Bird
    b.hangUpsideDown(); // Function of Bat class
    return 0;
}
