#include <iostream>
using namespace std;
int main()
{
    int valueA, valueB;
    int temp, sum;
    cout << "Please input value A: ";
    cin >> valueA;
    cout << "Please input value B: ";
    cin >> valueB;
    if (valueA > valueB)
    {
        temp = valueA;
        valueA = valueB;
        valueB = temp;
    }
    for (int i = valueA; i <= valueB; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Sum of odd integers from " << valueA << " to " << valueB << " is " << sum;
    return 0;
}