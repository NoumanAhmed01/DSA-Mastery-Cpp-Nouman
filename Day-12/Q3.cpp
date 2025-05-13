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

class Puppy : public Dog
{
public:
    void play()
    {
        cout << "Playing\n";
    }
};

int main()
{
    Puppy p;
    p.eat();  // Inherited from Animal
    p.bark(); // Inherited from Dog
    p.play(); // Function of Puppy class
    return 0;
}
