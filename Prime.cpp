#include <iostream>
using namespace std;
int main()
{
    int input;
    bool isPrime = true;
    cout << "Input a positive integer: ";
    cin >> input;
    if (input != 1)
    {
        for (int i = 2; i < input; i++)
        {
            if (input % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << input << " is a prime number" << endl;
        }
        else
        {
            cout << input << " is not a prime number" << endl;
        }
    }
    else
    {
        cout << input << " is not a prime number" << endl;
    }
    return 0;
}