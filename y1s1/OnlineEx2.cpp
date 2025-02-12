#include <iostream>
using namespace std;
int main()
{
    float x, y, w;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    if (x == 0 && y == 0)
    {
        cout << "Error! Both numbers are zero!";
    }
    else
    {
        w = (x * x + y * y) / ((2 * x + y * y) * (2 * y - x * x));
        cout << "The output w equals to " << w;
    }
    return 0;
}
