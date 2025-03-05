#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265;
    double radian;
    cout << "Degree\t\tSin\t\tCos\n";
    for (int degree = 0; degree <= 360; degree += 10)
    {
        radian = degree * PI / 180;
        cout << degree << "\t\t" << sin(radian) << "\t\t" << cos(radian) << endl;
    }
}