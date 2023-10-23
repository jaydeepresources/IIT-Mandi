#include <iostream>
#include <string>
using namespace std;

class AuthException
{
};

class CredentialsException : public AuthException
{
    string msg;
};

int main()
{

    try
    {
        throw CredentialsException();
        throw AuthException();
        // throw exception();
    }

    catch (CredentialsException ce)
    {
        cout << "Caught exception of CredentialsException" << endl;
    }
    catch (AuthException ae)
    {
        cout << "Caught exception of AuthException" << endl;
    }
    // catch (...)
    // {
    //     cout << "Caught exception of exception" << endl;
    // }
}