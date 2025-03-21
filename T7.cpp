// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Date
{
public:
	Date(int d, int m, int y)
	{
		setDate(d, m, y);
	}
	void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void print()
	{
		cout << day << "-" << month << "-" << year;
	}

private:
	int day;
	int month;
	int year;
};

void showInfo()
{
	cout << "Name      : Leung Yam Lam Matthew\n";
	cout << "Student ID: 24161883A\n";
	cout << "Class     : B03D\n";
}

void Q1()
{
	Date xmas(25, 12, 2013);
	cout << "xmas is: ";

	xmas.print();
	cout << endl;
}

class Car
{
public:
	Car()
	{
		speed = 0;
	}

	void showSpeed()
	{
		cout << "The car is moving at " << speed << " km/h." << endl;
	}

	void accelerate(int a)
	{
		cout << "Accelerating ... " << endl;
		speed += a;
		if (speed > 150)
		{
			speed = 150;
		}
	}

	void decelerate(int a)
	{
		cout << "Decelerating ... " << endl;
		speed -= a;
		if (speed < 0)
		{
			speed = 0;
		}
	}

	void stop()
	{
		cout << "Stopping ... " << endl;
		speed = 0;
	}

private:
	int speed;
	int a;
};

void Q2()
{
	Car myCar;

	myCar.showSpeed();
	myCar.accelerate(70);
	myCar.showSpeed();
	myCar.decelerate(20);
	myCar.showSpeed();
	myCar.accelerate(120);
	myCar.showSpeed();
	myCar.decelerate(100);
	myCar.showSpeed();
	myCar.stop();
	myCar.showSpeed();
}
// Not completed
class Phone
{
public:
	Phone(string a, string b)
	{
		brand = a;
		os = b;
	}

	void setPrice(int a)
	{
		price = a;
	}
	void showConfig()
	{
		cout << "Brand:\t" << brand << endl;
		cout << "OS:\t" << os << endl;
		cout << fixed << setprecision(2) << "Price:\t$" << price << endl;
	}

private:
	int price;
	string brand;
	string os;
};

void Q3()
{
	Phone iPhone("Apple", "iOS version 6");
	Phone noteTwo("Samsung", "Android 4.1");

	iPhone.setPrice(5588);
	noteTwo.setPrice(4630);

	cout << "Specification of iPhone:" << endl;
	iPhone.showConfig();
	cout << "\nSpecification of Note 2:" << endl;
	noteTwo.showConfig();
}

void Q4()
{
	// =====================================
	// Insert your codes for Question 4 here
	// No need main() and return 0
	// =====================================
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