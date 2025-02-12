#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter a two-digit integer (00 - 99): ";
    cin >> input;

    int digit1 = input / 10;
    int digit2 = input % 10;

    cout << "The two digit are " << digit1 << " and " << digit2 << endl;
    return 0;
}