// < > <= >= == !=

#include <iostream>
using namespace std;

int main()
{
    int i = 9;
    int j = 9;

    if (i++ == 10 && ++j == 10)
    {
        cout << i << ", " << j;
    }

    else
    {
        cout << i << ", " << j;
    }

    return 0;
}