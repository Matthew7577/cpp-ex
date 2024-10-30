#include <iostream>
int main()
{
    int x;
    std::cout << "Input value: ";
    std::cin >> x;
    std::cout << "The integer you have just entered plus 3, " << "\n";
    std::cout << "then the result times 9: " << (x + 3) * 9;
    return 0;
}
