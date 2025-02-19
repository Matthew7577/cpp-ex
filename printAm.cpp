#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i, j;
    cin >> j;
    if (j % 2 == 0 || j < 0 || j == 0) {
        cout << "E";
    } else {
        for (i = 0; i < j; i++)
        {
            int x = i + i - 1;
            cout << right << setw(j - i) << "*";
            while (x > 0){
                cout << "=";
                x--;
            }
            cout << endl;
        }
        
    }
}