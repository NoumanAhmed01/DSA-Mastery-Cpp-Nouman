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

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing\n";
    }
};

int main()
{
    Dog d;
    Cat c;
    d.eat();  // Inherited from Animal
    d.bark(); // Function of Dog class
    c.eat();  // Inherited from Animal
    c.meow(); // Function of Cat class
    return 0;
}
