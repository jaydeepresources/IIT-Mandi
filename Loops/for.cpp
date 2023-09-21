#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int res = 0;

    cout << "Enter number" << endl;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        res = n * i;
        cout << n << " * " << i << " = " << res << endl;
    }

    return 0;
}
