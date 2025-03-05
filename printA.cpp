#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int j;
    cin >> j;
    if (j % 2 == 0 || j <= 0)
    {
        cout << "E";
    }
    else
    {
        for (int i = 0; i < j; i++)
        {
            cout << right << setw(j - i) << "*";
            for (int x = 0; x < 2 * i - 1; x++)
            {
                if (i == j / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if (i > 0)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}