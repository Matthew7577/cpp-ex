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
            cout << setfill(' ') << right << setw(j - i) << "*";
            if (i != 0)
            {
                if (i == j / 2){
                    cout << setfill('*') << setw(i + i) << '*';
                } else {
                    cout << right << setw(i + i) << "*";
                }
            }
            cout << endl;
        }
    }
}