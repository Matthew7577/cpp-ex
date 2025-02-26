// SEHH2042 Assignment 1
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
	// Fill in your personal particulars here
}

void Q1()
{
	int input;
	int sum = 0;
	int positiveEven = 0;
	int negativeOdd = 0;
	do
	{
		cin >> input;
		if (input == 0)
		{
			break;
		}
		if (input > 0 && input % 2 == 0)
		{
			positiveEven++;
			sum += input;
		}
		if (input < 0 && input % 2 != 0)
		{
			negativeOdd++;
			sum += input;
		}
	} while (true);
	cout << positiveEven << endl;
	cout << negativeOdd << endl;
	cout << sum << endl;
	// Insert your code for Question 1 here
}

void Q2()
{
	// Insert your code for Question 2 here
}

void Q3()
{
	int input;
	cin << input;
	if (input % 2 == 0 || input <= 0)
	{
		cout << "E";
	}
	else
	{
		
	}
	// Insert your code for Question 3 here
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