#include <iostream>
using namespace std;

int squarer(int num)
{
    return num * num;
}

void print(int num)
{
    cout << "num=" << num << endl;
}

int main()
{
    // int square = squarer(5);
    // print(square);

    print(squarer(5));

    return 0;
}