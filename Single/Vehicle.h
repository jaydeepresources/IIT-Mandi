#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    string name;
    string color;
    int topSpeed;

    void print()
    {
        cout << "Name= " << name << "\n";
        cout << "Color= " << color << "\n";
        cout << "Top Speed= " << topSpeed << "\n";
    }

    void start()
    {
        cout << "Vehicle is starting.";
    }
};