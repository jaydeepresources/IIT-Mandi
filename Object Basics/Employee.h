#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    char name[50];
    float salary;

    void print()
    {
        cout << "Id: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
    }
};