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
        cout << "Name= " << name << endl;
        cout << "Color= " << color << endl;
        cout << "Top Speed= " << topSpeed << endl;
    }

    virtual void start()
    {
        cout << "Vehicle is starting." << endl;
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

    // Car c1 = Car();
    // c1.start();

    // WRONG
    // Car c2 = Vehicle();
    // c2.start();

    // Vehicle v1 = Car();
    // v1.start();
    // v1.Car::start();

    // Vehicle *v2 = new Car();
    // v2->start();

    // Car car;
    // FC fc;
    // Vehicle &vehicleRef = car;
    // GT gc = fc;
    // Car &c3 = dynamic_cast<Car &>(vehicleRef);
    // c3.start();

    // Vehicle vehicle = Vehicle();
    // Car &car = dynamic_cast<Car &>(vehicle);
    // car.start();
    return 0;
}