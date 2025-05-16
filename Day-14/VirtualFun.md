Virtual Functions, Static Members, and Friend Functions in C++
🔹 Virtual Function
A member function in the base class that you redefine in the derived class.

Declared using the virtual keyword.

Enables runtime polymorphism.

Decides at runtime which function to call (base or derived).

🔹 Pure Virtual Function (Abstract Function)
A virtual function with no body, declared with = 0.

Forces derived class to override the function.

Makes the class an abstract class.

virtual void show() = 0;
🔹 Static Data Member
Shared among all objects of a class.

Initialized only once outside the class using scope resolution ::.

Memory is allocated only once for all objects.

🔹 Static Member Function
Can access only static data members.

Not tied to an object, called using class name.

ClassName::staticFunction();
🔹 Friend Function
Not a member of the class but can access its private and protected members.

Declared using the friend keyword inside the class.

Defined like a normal function outside the class.

🔹 Friend Class
If a class is declared as a friend, it can access the private/protected members of another class.

friend class ClassName;
