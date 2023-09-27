#include <iostream>
using namespace std;

int main()
{
    int nums[][3] = {{1, 2, 3}, {1, 2, 3}};

    // cout << nums << endl;
    // cout << nums[0] << endl;
    // cout << nums[1] << endl;
    // int *c0 = nums[0];
    // int *c1 = nums[1];
    // if 2d array is an array of arrays
    // 2d array is a pointer to a pointer

    int *p = nums[0];

    // *(*(p+i)+j) was required in c

    for (int i = 0; i < 6; i++)
    {
        cout << *(p + i) << endl;
    }
}