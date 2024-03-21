/*Write a program to:
1.create an array of 10 integers and read 10 integers from user
2.Print the sum of these 10 integers
3.Print the multiplication of these 10 integer
4.If the sum is greater than 10 divide it by 10 and print the remainder
5.If the multiplication is greater than 20 divide by 10 and print the quotient*/

#include <iostream>
using namespace std;
int main()
{

    int arr[10];
    int sum = 0;
    int multi = 1;

    // Read 10 integer from the user and calculates sum and multiplication

    cout << "Enter the 10 integer:\n";

    // Loop
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        multi *= arr[i];
    }

    // Print sum of multiplication

    cout << "Sum of multipication: " << sum << endl;
    cout << "Multiplication of 10 integer: " << multi << endl;

    // chcek condition and perform operations

    if (sum > 10)
    {
        int remainder = sum % 10;
        cout << "Remainder of sum/10: " << remainder << endl;
    }

    if (multi > 20)
    {
        int quotient = multi / 10;
        cout << "Quotient of multi/10: " << quotient << endl;
    }

    return 0;
}