#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack s;

    s.push(2);
    s.push(12);
    s.push(22);
    s.push(32);
    s.push(22);

    s.printStack();

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    s.printStack();

    return 0;
}