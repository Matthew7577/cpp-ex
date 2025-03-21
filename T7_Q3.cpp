#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
    Phone(string brand, string os)
    {
        brandName = brand;
        osType = os;
    }
    void setPrice(int a)
    {
        if (a > 0)
        {
            price = a;
        }
        else
        {
            price = 0;
        }
    }
    void showConfig()
    {
        cout << setprecision(2);
        cout << left << setw(8) << "Brand: " << brandName << endl;
        cout << left << setw(8) << "OS: " << osType << endl;
        cout << left << setw(8) << "Price: " << "$" << fixed << price << endl;
    }

private:
    string brandName;
    string osType;
    double price;
};

int main()
{
    Phone iPhone("Apple", "iOS version 6");
    Phone noteTwo("Samsung", "Android 4.1");

    iPhone.setPrice(5588);
    noteTwo.setPrice(4630);

    cout << "Specification of iPhone:" << endl;
    iPhone.showConfig();
    cout << "\nSpecification of Note 2:" << endl;
    noteTwo.showConfig();

    return 0;
}