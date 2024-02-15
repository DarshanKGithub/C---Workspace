#include <iostream>

using namespace std;

int main()
{
    // ()
    // * and / have highest priority than
    // + and  -

    // double x = 1 + 2 * 3;
    // double x = (1 + 2) * 3;
    double x = 7;
    double y = 8;
    double z = (x + 10) / (3 * y);
    cout << z << endl;

    return 0;
}