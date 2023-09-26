#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5};

    // int *p = nums;
    int *p = &nums[0];

    cout << nums << endl;
    cout << &nums[0] << endl;
    cout << p << endl;

    cout << nums[4] << endl;
    cout << *(nums + 4) << endl;
    cout << *(p + 4) << endl;
    cout << p[4] << endl;
}