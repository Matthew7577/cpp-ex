#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int lf = 0;
    for (int i = 2; i <= 200; i++)
    {
        bool isPrime = true;
        for (int x = 2; x < i; x++)
        {
            if (i % x == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << right << setw(5) << i;
            ++lf;
            if (lf == 10)
            {
                cout << "\n";
                lf = 0;
            }
        }
    }
}