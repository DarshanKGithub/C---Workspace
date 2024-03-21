/*Create a program that takes in the weigth of an item and then calculates how much that item would weigh on Mars*/

#include <iostream>

int main()
{
    // Declare and intilization
    double item;

    // Mars weight formula // W(Mars) = W(Earth) * g(Mars) / g(Earth)
    double weightitem = (item * 3.73) / 9.81;

    std::cout << "Enter the item no to check wigtht mars:";
    std::cin >> item;

    std::cout << "The Final weight is " << weightitem << "\n";
    return 0;
}