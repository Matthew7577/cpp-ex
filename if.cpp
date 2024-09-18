#include <iostream>
using namespace std;
int main()
{
    int score;                 // a variable storing the score
    cout << "Enter a score: "; // prompt user for a score
    cin >> score;              // read the user input into score
    if (score >= 60)
        if (score >= 90)
            cout << "Great\n";
        else
            cout << "Passed\n";
    else
        cout << "Failed\n";
    return 0;
}