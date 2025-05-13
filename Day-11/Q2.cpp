#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor called\n";
    }

    // Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
        cout << "Parameterized Constructor called\n";
    }

    // Copy Constructor
    Student(Student &s)
    {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor called\n";
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for " << name << "\n";
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main()
{
    Student s1;               // Default Constructor
    Student s2("Nouman", 21); // Parameterized Constructor
    Student s3 = s2;          // Copy Constructor

    s2.display();
    s3.display();

    return 0;
}
