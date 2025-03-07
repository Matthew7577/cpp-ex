#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi;
    cout << setprecision(15);
    cout << right << setw(10) << "Terms" << setw(20) << "Value of PI" << endl;
    cout << right << setw(10) << "-----" << setw(20) << "-----------" << endl;
    for (int i = 10; i <= 100000; i *= 10)
    {
        pi = 0;
        for (int x = 0; x < i; x++)
        {
            double terms = 4.0 / (2 * x + 1);
            if (x % 2 == 0)
            {
                pi += terms;
            }
            else
            {
                pi -= terms;
            }
        }
        cout << right << setw(10) << i << setprecision(15) << right << setw(20) << fixed << pi << endl;
    }
}