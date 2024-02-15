// Write a code to  Swap the value of two variableS

#include <iostream>
using namespace std;

int main()
{
    int a = 40;
    int b = 60;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\n a:" << a << "\t b:" << b << endl;

    return 0;
}