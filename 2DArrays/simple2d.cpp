#include <iostream>
using namespace std;

int main()
{
    int marks[2][3];

    cout << "Enter details for 2 students having 3 marks each" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter details for student: " << (i + 1) << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter details for marks: " << (j + 1) << endl;
            cin >> marks[i][j];
        }
    }

    cout << "Printing details for 2 students having 3 marks each" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Details for student: " << (i + 1) << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Details for marks: " << (j + 1) << endl;
            cout << marks[i][j] << endl;
        }
    }
}