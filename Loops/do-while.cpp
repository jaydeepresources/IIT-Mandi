#include <iostream>
using namespace std;

int main()
{
    int ch = 0;
    do
    {
        cout << "Some Logic" << endl;
        cout << "Press 1 to re-run" << endl;
        cin >> ch;
    } while (ch == 1);
    return 0;
}