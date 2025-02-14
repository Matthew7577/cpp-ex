#include <iostream>
using namespace std;

int main()
{
    int x;
    double answer;
    cout << "Input the value of x: ";
    cin >> x;
    answer = (((3 + 4 * x) / 10.0) - ((10 * (x - 2) * (x - 2)) / (x - 3.0)));
    answer *= answer;
    cout << "The answer is " << answer;
    return 0;
}