/*Write a program to swap two number without using the third variable*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    // Input the number
    cout << "Enter the First number: ";
    cin >> a;

    cout << "Enter the Second number: ";
    cin >> b;

    cout << "Before Swapping, a: " << a << "and b: " << b << endl;

    // SWapping

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping, a: " << a << "and b: " << b << endl;

    return 0;
}