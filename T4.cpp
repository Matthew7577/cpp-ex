// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
using namespace std;

void showInfo()
{
	cout << "Name      : Leung Yam Lam Matthew\n";
	cout << "Student ID: 24161883A\n";
	cout << "Class     : B03D\n";
}

void Q1()
{
	int x, y;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	if (y % x == 0)
	{
		cout << x << " is a factor of " << y << endl;
	}
	else
	{
		cout << x << " is not a factor of " << y << endl;
	}
}

void Q2()
{
	int lf = 0;
	for (int i = 2; i <= 200; i++)
	{
		bool isPrime = true;
		for (int x = 2; x < i; x++)
		{
			if (i % x == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			cout << right << setw(5) << i;
			++lf;
			if (lf == 10)
			{
				cout << "\n";
				lf = 0;
			}
		}
	}
}

void Q3()
{
	double pi;
	cout << setprecision(15);
	cout << right << setw(10) << "Terms" << setw(20) << "Value of PI" << endl;
	cout << right << setw(10) << "-----" << setw(20) << "-----------" << endl;
	for (int i = 10; i <= 100000; i *= 10)
	{
		pi = 0;
		for (int x = 0; x < i; x++)
		{
			double terms = 4.0 / (2 * x + 1);
			if (x % 2 == 0)
			{
				pi += terms;
			}
			else
			{
				pi -= terms;
			}
		}
		cout << right << setw(10) << i << setprecision(15) << right << setw(20) << fixed << pi << endl;
	}
}

void Q4()
{
	int input;
    int i, j;
    cout << "Pattern input: ";
    cin >> input;
    for (i = 1; i <= input; i++)
    {
        if (i == 1 || i == input)
        {
            for (j = 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*" << setw(input - 1) << right << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 1; i <= input; i++)
    {
        if (i == 1 || i == input)
        {
            for (j = 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << setw(i) << right << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 1; i <= input; i++)
    {
        if (i == 1 || i == input)
        {
            for (j = 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << setw(input - i + 1) << right << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < input; ++i) {
        for (j = 0; j < input; ++j) {
            if (i == 0 || i == input - 1 || i == j || i + j == input - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < input; ++i) {
        for (j = 0; j < input; ++j) {
            if (i == 0 || i == input - 1 || j == 0 || j == input - 1 || i == j || i + j == input - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void Q5()
{
	
}

// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do
	{
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice)
		{
		case '0':
			showInfo();
			break;
		case '1':
			Q1();
			break;
		case '2':
			Q2();
			break;
		case '3':
			Q3();
			break;
		case '4':
			Q4();
			break;
		case '5':
			Q5();
			break;
		case 'q':
			break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END