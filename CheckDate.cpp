#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    bool valid = true;
    bool leapYear = false;
    cout << "Input day month year: ";
    cin >> day >> month >> year;
    // Check leap year
    // if (year % 4 == 0)
    // {
    //     if (year % 100 == 0)
    //     {
    //         if (year % 400 == 0)
    //         {
    //             leapYear = true;
    //         }
    //         else
    //         {
    //             leapYear = false;
    //         }
    //     }
    //     else
    //     {
    //         leapYear = true;
    //     }
    // }
    // else
    // {
    //     leapYear = false;
    // }
    leapYear = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31 || day <= 0)
        {
            valid = false;
        }
        else
        {
            break;
        }
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30 || day <= 0)
        {
            valid = false;
        }
        else
        {
            break;
        }
        break;

    case 2:
        if (leapYear)
        {
            if (day > 29 || day <= 0)
            {
                valid = false;
            }
        }
        else
        {
            if (day > 28 || day <= 0)
            {
                valid = false;
            }
            break;
        }
        break;

    default:
        break;
    }

    if (valid)
    {
        cout << day << "-" << month << "-" << year << " is correct" << endl;
    }
    else
    {
        cout << day << "-" << month << "-" << year << " is incorrect" << endl;
    }
    return 0;
}