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

class Mammal
{
public:
    void walk()
    {
        cout << "Walking\n";
    }
};

class Bat : public Animal, public Mammal
{
public:
    void fly()
    {
        cout << "Flying\n";
    }
};

int main()
{
    Bat b;
    b.eat();  // Inherited from Animal
    b.walk(); // Inherited from Mammal
    b.fly();  // Function of Bat class
    return 0;
}
