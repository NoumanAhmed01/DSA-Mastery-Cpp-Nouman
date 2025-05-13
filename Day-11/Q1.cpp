#include <iostream>
using namespace std;

class User
{
    int id;
    string password;

public:
    string name;

    User(int id)
    {
        this->id = id;
    }
    string getPassword()
    {
        return password;
    }

    void setPassword(string password)
    {
        this->password = password;
    }
};

int main()
{

    User obj(101);
    obj.name = "Nouman Ahmed";
    obj.setPassword("abc");
    cout << "username: " << obj.name << endl;
    cout << "password: " << obj.getPassword();

    return 0;
}