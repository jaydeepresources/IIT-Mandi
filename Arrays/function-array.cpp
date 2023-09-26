#include <iostream>
using namespace std;

void squarer(int nums[])
{
    for (int i = 0; i < 5; i++)
        nums[i] = nums[i] * nums[i];
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    cout << "Before squaring" << endl;
    for (int i = 0; i < 5; i++)
        cout << nums[i] << " ";

    squarer(nums);

    cout << endl;

    cout << "After squaring" << endl;
    for (int i = 0; i < 5; i++)
        cout << nums[i] << " ";

    // &nums[0] = addr of first index of array
    // nums = same as above
}