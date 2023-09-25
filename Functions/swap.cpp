#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a; // *a means value stored at address pointed by a
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Before Swapping" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    swap(&a, &b);
    cout << "After Swapping" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    return 0;
}
