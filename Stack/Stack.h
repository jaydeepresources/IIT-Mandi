#include <iostream>
using namespace std;

class Stack
{
private:
    int elements[5];
    int top;

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            elements[i] = 0;
        }
    }

    void push(int element)
    {
        if (top == 4)
            cout << "Stack is already full." << endl;
        else
        {
            elements[++top] = element;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is already empty." << endl;
            return 0;
        }
        else
        {
            return elements[top--];
        }
    }

    int peek()
    {
        if (top != -1)
            return elements[top];
        return 0;
    }

    void printStack()
    {
        cout << "Printing Stack" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << elements[i] << " ";
        }
    }
};
