#include <iostream>
using namespace std;
int main()
{
    int units;
    cout << "Input Value: ";
    cin >> units;
    if (units <= 0)
        cout << "Input error";
    else
        cout << "Unit = " << units << "\n";
}