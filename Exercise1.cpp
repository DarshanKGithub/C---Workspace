#include <iostream>
using namespace std;

int main()
{
    // double sales = 9500;
    // cout << "sales:$"
    //      << sales << endl;

    // double salesTax = .04;
    // cout << "salesTax:"
    //      << sales * salesTax << endl;

    // double countyTax = .02;
    // cout << "countyTax: " << sales * countyTax << endl;

    // return 0;

    double sales = 9500;
    double salesTax = 0.4;
    double countyTax = 0.2;
    double stateTax = sales + countyTax;

    cout << "\nsales:$" << sales << "\nsalesTax:" << sales * salesTax << "\ncountyTax:" << sales * countyTax << "\nsalesTax:" << stateTax << endl;

    return 0;
}