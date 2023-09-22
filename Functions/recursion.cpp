#include <iostream>
using namespace std;

void printNumber(int num)
{
    cout << num << " ";
    // if (num >= 10)
    //     return;
    // printNumber(++num);

    if (num < 10)
        printNumber(++num);
}

int main()
{
    printNumber(0);
    return 0;
}

/*

swap(int a, int b){..}

main(){
    swap(x, y);
    
}

*/