#include <iostream>
using namespace std;
int main()
{
    int x, y;
    for (x = 1; x <= 10; x++)
    {
        cout << "Products of " << x << "\n";
        for (y = 1; y <= 10; y++)
        {
            cout << x * y << "\t";
        }
        cout << endl
             << endl;
    }
    return 0;
}