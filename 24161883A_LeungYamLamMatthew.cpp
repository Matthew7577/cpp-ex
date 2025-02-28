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
	char chargerType;
	int startHour, endHour;
	int totalHour = 0;
	double totalCost = 0;
	const int parkingFee = 20;
	const int peakFast = 60, npeakFast = 45, overnightFast = 8;
	const int peakNormal = 20, npeakNormal = 15, overnightNormal = 5;
	const int freeHourFast = 1, freeHourNormal = 4;
	cin >> chargerType;
	cin >> startHour;
	cin >> endHour;
	if (startHour > endHour)
	{
		endHour += 24;
	}
	switch (chargerType)
	{
	case 'f':
		for (int i = startHour; i < endHour; i++)
		{
			int temp = i;
			if (i > 23)
			{
				i -= 24;
			}
			switch (i)
			{
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
				totalCost += peakFast;
				break;
			case 18:
			case 19:
			case 20:
			case 21:
				totalCost += npeakFast;
				break;
			case 22:
			case 23:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				totalCost += overnightFast;
			}
			totalHour++;
			i = temp;
		}
		if (totalCost > 100)
		{
			totalCost *= 0.85;
		}
		if (totalHour > freeHourFast)
		{
			totalCost += (totalHour - freeHourFast) * parkingFee;
		}
		break;

	case 'n':
		for (int i = startHour; i < endHour; i++)
		{
			int temp = i;
			if (i > 23)
			{
				i -= 24;
			}
			switch (i)
			{
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
				totalCost += peakNormal;
				break;
			case 18:
			case 19:
			case 20:
			case 21:
				totalCost += npeakNormal;
				break;
			case 22:
			case 23:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				totalCost += overnightNormal;
			}
			totalHour++;
			i = temp;
		}
		if (totalCost > 100)
		{
			totalCost *= 0.85;
		}
		if (totalHour > freeHourNormal)
		{
			totalCost += (totalHour - freeHourNormal) * parkingFee;
		}
		break;
	}
	cout << setprecision(2) << fixed << totalCost;
	// Insert your code for Question 2 here
}

void Q3()
{
	int input;
	cin >> input;
	if (input % 2 == 0 || input <= 0)
	{
		cout << "E";
	}
	else
	{
		for (int i = 1; i <= input; i++)
		{
			if (i == 1 || i == input / 2 + 1)
			{
				for (int x = 1; x <= input; x++)
				{
					cout << "*";
				}
			}
			else if (i <= input / 2)
			{
				cout << "*" << right << setw(input - 1) << "*";
			}
			else
			{
				cout << right << setw(input) << "*";
			}
			cout << "\n";
		}
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