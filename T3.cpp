// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
using namespace std;

void showInfo()
{
	cout << "Name      : Leung Yam Lam Matthew\n";
	cout << "Student ID: 24161883A\n";
	cout << "Class     : B03D\n";
}

void Q1()
{
	int input, ans = 31;
	cout << "I have a number between 1 and 100.\n";
	cout << "Can you guess my number?\n";
	do
	{
		cout << "Guess: ";
		cin >> input;
		if (input > ans)
			cout << "Too high. Try again.\n";
		else if (input < ans)
			cout << "Too low. Try again.\n";
		else
			cout << "Excellent! Correct guess.\n";
	} while (input != ans);
}

void Q2()
{
	int n;
	cout << "n: ";
	cin >> n;
	int factorial = 1;
	for (int i = n; i > 0; i--)
	{
		factorial *= i;
	}
	cout << n << "! = " << factorial << endl;
}

void Q3()
{
	int valueA, valueB;
	int temp, sum;
	cout << "Please input value A: ";
	cin >> valueA;
	cout << "Please input value B: ";
	cin >> valueB;
	if (valueA > valueB)
	{
		temp = valueA;
		valueA = valueB;
		valueB = temp;
	}
	for (int i = valueA; i <= valueB; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}
	cout << "Sum of odd integers from " << valueA << " to " << valueB << " is " << sum;
}

void Q4()
{
	double base, sum = 1;
	int exponent;
	cout << "Enter the base value: ";
	cin >> base;
	cout << "Enter the exponent value: ";
	cin >> exponent;
	if (exponent == 0)
	{
		sum == 1;
	}
	else if (exponent < 0)
	{
		for (int i = -1; i >= exponent; i--)
		{
			sum /= base;
		}
	}
	else
	{
		for (int i = 1; i <= exponent; i++)
		{
			sum *= base;
		}
	}
	cout << base << " to the power of " << exponent << " is " << sum;
}

void Q5()
{
	int input;
	bool isPrime = true;
	cout << "Input a positive integer: ";
	cin >> input;
	if (input != 1)
	{
		for (int i = 2; i < input; i++)
		{
			if (input % i == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			cout << input << " is a prime number" << endl;
		}
		else
		{
			cout << input << " is not a prime number" << endl;
		}
	}
	else
	{
		cout << input << " is not a prime number" << endl;
	}
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