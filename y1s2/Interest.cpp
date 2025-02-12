#include <iostream>
using namespace std;

int main() {
    int value, ctype;
    cout << "What is the principal value? ";
    cin >> value;
    cout << "Please enter the customer type: ";
    cin >> ctype;
    switch (ctype) {
        case 0 : cout << "Interest payable after one year: $" << value * 0.005 << endl;
        break;
        case 1 : cout << "Interest payable after one year: $" << value * 0.008 << endl;
        break;
        case 2 : cout << "Interest payable after one year: $" << value * 0.01 << endl;
        break;
        case 3 : cout << "Interest payable after one year: $" << value * 0.012 << endl;
        break;
        case 4 : cout << "Interest payable after one year: $" << value * 0.02 << endl;
        break;
        default : cout << "Interest payable after one year: Error in customer type" << endl;
        break;
    }
    return 0;
}