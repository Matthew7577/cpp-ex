#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int input;
    int i, j;
    cout << "Pattern input: ";
    cin >> input;
    for (i = 1; i <= input; i++)
    {
        if (i == 1 || i == input)
        {
            for (j = 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*" << setw(input - 1) << right << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 1; i <= input; i++)
    {
        if (i == 1 || i == input)
        {
            for (j = 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << setw(i) << right << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 1; i <= input; i++)
    {
        if (i == 1 || i == input)
        {
            for (j = 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << setw(input - i + 1) << right << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < input; ++i) {
        for (j = 0; j < input; ++j) {
            if (i == 0 || i == input - 1 || i == j || i + j == input - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < input; ++i) {
        for (j = 0; j < input; ++j) {
            if (i == 0 || i == input - 1 || j == 0 || j == input - 1 || i == j || i + j == input - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}