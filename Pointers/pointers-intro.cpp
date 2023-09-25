#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << a << endl;
    cout << &a << endl;

    int *p = &a;

    cout << p << endl;
    cout << *p << endl;

    a = 15;
    *p = 20;

    // *&p; --> &a;
    // &*p; --> &a;

    // int **p2p = &p;

    return 0;
}