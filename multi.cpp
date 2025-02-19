#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j;
    cout << "                 Multiplication Table" << endl;
    cout << "     |    1    2    3    4    5    6    7    8    9" << endl;
    cout << "-----+----------------------------------------------" << endl;
    for (i = 1; i < 10; i++)
    {
        cout << right << setw(5) << i << "|" ;
        for (j = 1; j < 10; j++)
        {
            cout << right << setw(5) << i * j;
        }
        cout << "\n";
    }
}