#include <iostream>
using namespace std;
int main()
{
    int input;
    while (input > 0)
    {
        cout << "Enter a positive integer: ";
        cin >> input;
        cout << "Factors of " << input << ": ";
        for (int n = 1; n <= input; n++)
        {
            if (input % n == 0)
                cout << n << " ";
        }
        cout << endl;
    }
    cout << "Only positive integer is accepted. Program ends.";
}