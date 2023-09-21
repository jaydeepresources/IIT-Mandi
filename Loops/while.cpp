#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int i = 2;
    cout << "Enter number" << endl;
    cin >> num;
    while (i < num)
    {
        if (num % i == 0)
            break;
        else
            i++;
    }

    if (num == i)
        cout << num << " is prime." << endl;
    else
        cout << num << " is not prime." << endl;
    return 0;
}

/*

whether a number is prime ?

-- accept a num from user.
-- start dividing from 2.
-- if rem is 0, break.
-- else divide by the next num.
-- repeat steps 2-4
-- stop when num-1

*/