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
    }

    Vehicle(string name, string color, int topSpeed)
    {
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
    }

    Car(string name, string color, int topSpeed, string transmission) : Vehicle(name, color, topSpeed)
    {
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

Vehicle &getVehicle()
{
    Car *car = new Car();

    Vehicle &vehicleRef = *car;
    return vehicleRef;
}

void sendVehicle(Vehicle &vehicle)
{
    vehicle.start();
}

int main()
{
    // Vehicle &vehicleRef = getVehicle();
    // vehicleRef.transmission = "MT";
    // vehicleRef.start();

    // Car &carRef = dynamic_cast<Car &>(vehicleRef);
    // carRef.transmission = "MT";
    // carRef.start();

    // Car car;
    // Vehicle &vehicleRef = car;

    // sendVehicle(car);
    // sendVehicle(vehicleRef);

    return 0;
}