#include <iostream>
using namespace std;

int main()
{
    float a = 0;
    float b = 0;
    float res = 0;
    int ch = 0;

    cout << "Enter values for a and b\n";
    cin >> a >> b;

    cout << "1. Add\n2.Sub\n3.Mul\n4.Div\n";
    cin >> ch;

    // if (ch == 1)
    // {
    //     res = a + b;
    //     cout << res;
    // }
    // else if (ch == 2)
    // {
    //     res = a - b;
    //     cout << res;
    // }
    // else if (ch == 3)
    // {
    //     res = a * b;
    //     cout << res;
    // }
    // else if (ch == 4)
    // {
    //     res = a / b;
    //     cout << res;
    // }
    // else
    // {
    //     cout << "Invalid Operation";
    // }

    switch (ch)
    {
    case 1:
        res = a + b;
        cout << res;
        break;
    case 2:
        res = a - b;
        cout << res;
        break;
    case 3:
        res = a * b;
        cout << res;
        break;
    case 4:
        res = a / b;
        cout << res;
        break;

    default:
        cout << "Invalid Operation";
    }

    return 0;
}