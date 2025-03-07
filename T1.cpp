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
	cout << "This is Tutorial 1";
}

void Q2()
{
	double m, cm;
	cout << "Input meter: ";
	cin >> m;
	cm = m * 100;
	cout << m << "m =  " << cm << "cm" << endl;
}

void Q3()
{
	const double PI = 3.14159265;
	double r, h, v;
	cout << "Enter the radius (in cm): ";
	cin >> r;
	cout << "Enter the height (in cm): ";
	cin >> h;
	v = PI * r * r * h / 3.0;
	cout << "The volume of the cone is " << v << " cm^3" << endl;
}

void Q4()
{
	int x;
	double answer;
	cout << "Input the value of x: ";
	cin >> x;
	answer = (((3 + 4 * x) / 10.0) - ((10 * (x - 2) * (x - 2)) / (x - 3.0)));
	answer *= answer;
	cout << "The answer is " << answer << endl;
}

void Q5()
{
	int inputDigit;
	int fDigit, sDigit;
	cout << "Enter a two-digit integer (00 - 99): ";
	cin >> inputDigit;
	fDigit = inputDigit / 10;
	sDigit = inputDigit % 10;
	cout << "The two digits are " << fDigit << " and " << sDigit << endl;
}

// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice) {
		case '0': showInfo(); break;
		case '1': Q1(); break;
		case '2': Q2(); break;
		case '3': Q3(); break;
		case '4': Q4(); break;
		case '5': Q5(); break;
		case 'q': break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END