#include <iostream>
int main(){
    int i=1, temp, total=0;
    float average;
    std::cout << "Enter 10 numbers below,\n";
    do{
        std::cout << "Number_" << i << ": ";
        std::cin >> temp;
        total += temp;
        i++;
    }while(i <= 10);
    average = total / 10.0;
    std::cout << "The total of 10 input numbers is: " << total << "\n";
    std::cout << "The average of 10 input numbers is: " << average << "\n";
    return 0;
}