// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <cmath>
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
	const double PI = 3.14159265;
	double radian;
	cout << "Degree\t\tSin\t\tCos\n";
	for (int degree = 0; degree <= 360; degree += 10)
	{
		radian = degree * PI / 180;
		cout << degree << "\t\t" << sin(radian) << "\t\t" << cos(radian) << endl;
	}
}

void Q2()
{
	const double PI = 3.14159265;
	double radian;
	cout << "Degree\t\tSin\t\tCos\n";
	cout << setprecision(4);
	for (int degree = 0; degree <= 360; degree += 10)
	{
		radian = degree * PI / 180;
		cout << fixed << right << setw(3) << noshowpos << degree << "\t\t" << fixed << showpos << sin(radian) << "\t\t" << fixed << cos(radian) << endl;
	}
}

double integerPower(double base, int exponent)
{
	double result = 1;
	if (exponent == 0)
	{
		return 1;
	}
	else if (exponent < 0)
	{
		for (int i = -1; i >= exponent; i--)
		{
			result /= base;
		}
	}
	else
	{
		for (int i = 1; i <= exponent; i++)
		{
			result *= base;
		}
	}
	return result;
}

void Q3()
{
	double base;
	int exponent;
	cout << "Enter the base value: ";
	cin >> base;
	cout << "Enter the exponent value: ";
	cin >> exponent;
	double result = integerPower(base, exponent);
	cout << base << " to the power of " << exponent << " is " << result;
}

void nChar(int n, char c)
{
	for (int i = 0; i < n; i++)
		cout << c;
}

void Q4()
{
	for (int i = 1; i <= 5; i++)
	{
		nChar(i, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++)
	{
		nChar(5 - i, ' ');
		nChar(i, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++)
	{
		nChar(5 - i, ' ');
		nChar(i + i - 1, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		if (i > 5)
		{
			nChar(i - 5, ' ');
			nChar((10 - i) * 2 - 1, '*');
			cout << endl;
		}
		else
		{
			nChar(5 - i, ' ');
			nChar(i + i - 1, '*');
			cout << endl;
		}
	}
	cout << endl;
	for (int x = 1; x <= 3; x++)
	{
		for (int i = 1; i <= 5; i++)
		{
			nChar(5 - i, ' ');
			nChar(i + i - 1, '*');
			cout << endl;
		}
	}
	cout << endl;
}

void Q5()
{
	// =====================================
	// Insert your codes for Question 5 here
	// No need main() and return 0
	// =====================================
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