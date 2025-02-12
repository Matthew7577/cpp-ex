#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    if (y % x == 0) {
        cout << x << " is a factor of " << y << endl;
    } else {
        cout << x << " is not a factor of " << y << endl;
    }
    return 0;
}