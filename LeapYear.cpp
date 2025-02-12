#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Input a year: ";
    cin >> input;
    if (input % 4 == 0) {
        if (input % 100 == 0) {
            if (input % 400 == 0) {
                cout << "Is " << input << " a leap year? Yes" << endl;
            } else {
                cout << "Is " << input << " a leap year? No" << endl;
            }
        } else {
            cout << "Is " << input << " a leap year? Yes" << endl;
        }
    } else {
        cout << "Is " << input << " a leap year? No" << endl;
    }
    return 0;
}