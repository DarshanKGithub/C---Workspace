// Write a program to convert a temperature from Fahrenhit to celsius

#include <iostream>
using namespace std;
int main()
{
    cout << "Fahrenhit:";

    double fahrenhit;

    cin >> fahrenhit;

    double celsius = (fahrenhit - 30) / 1.8; // formula
    cout << celsius;
    return 0;
}