#include <iostream>
using namespace std;
int main()
{
    int x = -10;

    try
    {
        if (x < 0)
        {
            throw x;
            // throw "Error";

            cout << "Will I execute ?" << endl;
        }
        else
        {
            cout << "x= " << x << endl;
        }
    }
    catch (int e)
    {
        cout << "Exception: E = " << e << endl;
    }
    catch (float f)
    {
        cout << "Exception: F = " << f << endl;
    }
    catch (...)
    {
        cout << "Default Exception Handler" << endl;
    }

    return 0;
}