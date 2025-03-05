#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int input;
    cout << "Input a positive integer: ";
    cin >> input;
    if (isPrime(input)) {
        cout << input << " is a prime number" << endl;
    } else {
        cout << input << " is not a prime number" << endl;
    }
    return 0;
}