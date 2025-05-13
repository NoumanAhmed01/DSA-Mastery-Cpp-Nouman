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

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking\n";
    }
};

int main()
{
    Dog d;
    d.eat();  // Inherited function
    d.bark(); // Function of Dog class
    return 0;
}
