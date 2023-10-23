#include <iostream>
using namespace std;

void foo(int x) throw(int)
{
    if (x < 0)
        throw x;
    else
        cout << "x= " << x << endl;
}

int main()
{
    int x = -10;

    try
    {
        foo(x);
    }
    catch (int x)
    {
        cout << "Exception Handled" << endl;
    }
    catch (...)
    {
        cout << "Default Exception Handler" << endl;
    }

    return 0;
}