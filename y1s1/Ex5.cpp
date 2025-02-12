#include <iostream>
int main()
{
    int i, input, total;
    while (true)
    {
        std::cout << "Enter a number: ";
        std::cin >> input;
        if (input < 0)
        {
            break;
        }
        total += input;
    }
    std::cout << "The sum of all positive numbers entered is " << total;
}
