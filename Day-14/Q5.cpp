// Friend Class

#include <iostream>
using namespace std;

class Engine
{
private:
    int rpm = 5000;
    friend class Car;
};

class Car
{
public:
    void showRPM(Engine e)
    {
        cout << "Engine RPM: " << e.rpm << endl;
    }
};

int main()
{
    Engine e;
    Car c;
    c.showRPM(e);
}
