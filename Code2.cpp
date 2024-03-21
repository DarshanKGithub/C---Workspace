#include <iostream>

int main()
{
    double weight1;
    int weight2;

    weight1 = 154.49;

    weight2 = (int)weight1;
    // int this stored in  weigth2 and this is store in int form so it will remove the decimal number
    std::cout << "Weight is : " << weight2 << "\n";

    return 0;
}