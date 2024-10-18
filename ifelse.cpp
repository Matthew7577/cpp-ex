#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter a score: ";
    cin >> score;
    if (score >= 60)
        cout << "Passed\n";
    else
        cout << "Failed\n";
    return 0;
}
