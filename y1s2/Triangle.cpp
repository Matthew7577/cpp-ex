#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x, y, z;
    double sinA, cosA, tanA;
    cout << setprecision(3);
    cout << "Input slide x: ";
    cin >> x;
    cout << "Input slide y: ";
    cin >> y;
    cout << "Input slide z: ";
    cin >> z;
    if (x * x + y * y != z * z)
    {
        cout << "Error: Not right-angled triangle" << endl;
        return 0;
    }
    else
    {
        sinA = x / z;
        cosA = y / z;
        tanA = x / y;
        cout << right << setw(10) << "sinA" << right << setw(10) << "cosA" << right << setw(10) << "tanA" << endl;
        cout << fixed;
        cout << right << setw(10) << sinA << right << setw(10) << cosA << right << setw(10) << tanA << endl;
        return 0;
    }
}