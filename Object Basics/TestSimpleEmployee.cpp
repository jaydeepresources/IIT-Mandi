#include <iostream>
#include "Employee.h"
#include "SalaryAppraisal.h"
using namespace std;

// Employee changeSalary(Employee e)
// {
//     e.salary += 1000;
//     return e;
// }

int main()
{
    Employee e1;

    cout << "Enter id, name and salary for employee" << endl;
    cin >> e1.id >> e1.name >> e1.salary;

    // demonstation of cross file objects

    SalaryAppraisal s;

    e1.salary = s.calculateNewSalary(e1.salary, 2);

    cout << "New Salary= " << e1.salary << endl;

    // demonstration of function changing object values

    // e1 = changeSalary(e1);
    // cout << "New Salary= " << e1.salary << endl;

    // demonstration of object assigment

    // Employee e2;
    // e2 = e1;

    // cout << "Printing e1" << endl;
    // e1.print();

    // cout << "Printing e2" << endl;
    // e2.print();

    // e2.salary = 1000;

    // cout << "e1--salary" << e1.salary << endl;
    // cout << "e2--salary" << e2.salary << endl;

    return 0;
}