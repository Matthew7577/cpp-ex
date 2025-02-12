#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter a two-digit integer (00 - 99): ";
    cin >> input;

    int digit1 = input / 10;
    int digit2 = input % 10;

    if (digit1 > digit2) {
        cout << digit1 << " > " << digit2 << endl;
    } else if (digit1 < digit2) {
        cout << digit1 << " < " << digit2 << endl;
    } else {
        cout << digit1 << " = " << digit2 << endl;
    }
    return 0;
}