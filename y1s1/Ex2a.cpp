#include <iostream>
using namespace std;
int main()
{
    int units;
    int total;
    cout << "Input Value: ";
    cin >> units;
    if (units <= 0)
    {
        cout << "Input error\n";
    }
    else
    {
        total = units * 5;
        cout << "Unit = " << units << "\n";
        cout << "The total is: " << total;
    }
    return 0;
}
