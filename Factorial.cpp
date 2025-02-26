#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial *= i;
    }
    cout << n << "! = " << factorial << endl;
    return 0;
}