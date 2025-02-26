#include <iostream>
using namespace std;
int main()
{
    double base, sum = 1;
    int exponent;
    cout << "Enter the base value: ";
    cin >> base;
    cout << "Enter the exponent value: ";
    cin >> exponent;
    if (exponent == 0)
    {
        sum == 1;
    }
    else if (exponent < 0)
    {
        for (int i = -1; i >= exponent; i--)
        {
            sum /= base;
        }
    }
    else
    {
        for (int i = 1; i <= exponent; i++)
        {
            sum *= base;
        }
    }
    cout << base << " to the power of " << exponent << " is " << sum;
    return 0;
}