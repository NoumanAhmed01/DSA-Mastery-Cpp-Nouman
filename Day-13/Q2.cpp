#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound\n";
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks\n";
    }
};

int main()
{
    Animal *a;
    Dog d;
    a = &d;
    a->sound(); // Runtime polymorphism
    return 0;
}
