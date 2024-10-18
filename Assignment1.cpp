#include <iostream>

using namespace std;

int main() {
  int n;
  int j = 0;
  int i = 1;
  cout << "Enter the value of n: ";
  cin >> n ;
  do
  {
    cout << i << "*" << i << "*" << i << " = " << i*i*i << endl;
    j += i*i*i;
    i++;
  } while (i <= n);
  cout << "The sum of the above series is: " << j;
}
