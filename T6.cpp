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
	// Fill in your personal particulars below
	cout << "Name      : Leung Yam Lam Matthew\n";
	cout << "Student ID: 24161883A\n";
	cout << "Class     : B03D\n";
}

double hypoten(double x, double y)
{
	double z;
	z = sqrt(x * x + y * y);
	return z;
}

void Q1()
{
	double side1, side2;
	cout << "Please enter the length of first side: ";
	cin >> side1;
	cout << "Please enter the length of second side: ";
	cin >> side2;
	cout << "Hypotenuse of a " << side1 << " by " << side2 << " right triangle is " << hypoten(side1, side2);
}

void sumAvg(int lower, int upper, int &sum, double &average)
{
	sum = 0;
	for (int i = lower; i <= upper; i++)
	{
		sum += i;
	}
	average = (double)sum / (upper - lower + 1);
}

void Q2()
{
	int lower, upper, sum;
	double average;
	cout << "Enter the lower bound: ";
	cin >> lower;
	cout << "Enter the upper bound: ";
	cin >> upper;
	sumAvg(lower, upper, sum, average);
	cout << "From " << lower << " to " << upper << ":\n";
	cout << "Sum     = " << sum << endl;
	cout << "Average = " << average << endl;
}

double calcPI(int terms, int currentTerm = 1, double denominator = 1.0, double sign = 1.0) {
    if (currentTerm > terms) {
        return 0.0;
    }
    return (sign * (4.0 / denominator)) + calcPI(terms, currentTerm + 1, denominator + 2, -sign);
}


void Q3()
{
	int terms;
    cout << "How many terms for PI: ";
    cin >> terms;
	double pi = calcPI(terms);
	cout << setprecision(15);
	cout << "PI with " << terms << " terms is " << fixed << setprecision(15) << pi << endl;
}

long long printBinary(int num)
{
	if (num == 0)
		return 0;
	return num % 2 + 10 * printBinary(num / 2);
}

void Q4()
{
	int num;

	cout << "Input a positive decimal integer: ";
	cin >> num;

	cout << "The binary version is " << printBinary(num) << endl;
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