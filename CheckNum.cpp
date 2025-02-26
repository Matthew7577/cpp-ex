#include <iostream>
using namespace std;
int main()
{
    int input, ans = 31;
    cout << "I have a number between 1 and 100.\n";
    cout << "Can you guess my number?\n";
    do
    {
        cout << "Guess: ";
        cin >> input;
        if (input > ans)
            cout << "Too high. Try again.\n";
        else if (input < ans)
            cout << "Too low. Try again.\n";
        else
            cout << "Excellent! Correct guess.\n";
    } while (input != ans);
    return 0;
}