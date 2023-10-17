#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    string name;
    string color;
    int topSpeed;

    Vehicle()
    {
        cout << "Vehicle's Constructor" << endl;
    }

    Vehicle(string name, string color, int topSpeed)
    {
        cout << "Vehicle's Parameterized Constructor" << endl;
        this->name = name;
        this->color = color;
        this->topSpeed = topSpeed;
    }

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

class Car : public Vehicle
{

public:
    string transmission;

    Car()
    {
        cout << "Car's Constructor" << endl;
    }

    Car(string name, string color, int topSpeed, string transmission) : Vehicle(name, color, topSpeed)
    {
        cout << "Car's Parameterized Constructor" << endl;
        this->transmission = transmission;
    }

    void print()
    {
        Vehicle::print();
        cout << "Transmission= " << transmission << endl;
    }

    void start()
    {
        cout << "The Car engine starts in a different way than other vehicles." << endl;
    }
};

int main()
{
    // Car c1;
    Car c1 = Car("Rapid", "White", 160, "Manual");
    return 0;
}
