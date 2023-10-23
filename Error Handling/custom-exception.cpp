#include <iostream>
using namespace std;

class CustomException
{
};

int main()
{
    try
    {
        throw CustomException();
    }

    catch (CustomException d)
    {
        cout << "Caught exception of demo class" << endl;
    }
}