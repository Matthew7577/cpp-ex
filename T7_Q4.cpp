#include <iomanip>
#include <iostream>
using namespace std;

class Account
{
public:
    Account(double a) { balance = a; }
    void credit(double creditAamount) { balance += creditAamount; }
    void debit(double debitAmount) { balance -= debitAmount; }
    double getBalance() { return balance; }

private:
    double balance;
};

void transfer(Account &a1, Account &a2)
{
    double amount;
    cout << "How much to transfer: ";
    cin >> amount;
    if (amount < a1.getBalance())
    {
        a1.debit(amount);
        a2.credit(amount);
        cout << "Transfer completed." << endl;
    }
    else
    {
        cout << "Insufficient balance." << endl;
    }
};

int main()
{
    Account peter(1000), mary(1500);
    int option;

    cout << fixed << setprecision(2);

    do
    {
        cout << "\n";
        cout << "Peter's balance: " << peter.getBalance() << endl;
        cout << "Mary's balance:  " << mary.getBalance() << endl;
        cout << "------\n";
        cout << "(1) Transfer money from Peter to Mary\n";
        cout << "(2) Transfer money from Mary to Peter\n";
        cout << "(3) Quit\n";
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            transfer(peter, mary);
            break;
        case 2:
            transfer(mary, peter);
            break;
        case 3:
            cout << "Bye Bye.\n";
            break;
        default:
            cout << "Incorrect option.\n";
        }
    } while (option != 3);

    return 0;
}
