// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      : Leung Yam Lam Matthew\n";
	cout << "Student ID: 24161883A\n";
	cout << "Class     : B03D\n";
}

void printData(int list[], int size)
{
	if (size == 100)
	{
		cout << "The random integers are:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << setw(5) << list[i];

			if (i % 10 == 9)
				cout << endl;
		}
	}
	else
	{
		cout << "The input integers are:\n";
		for (int i = 0; i < size; i++)
		{
			cout << setw(5) << list[i];
			if (i % 5 == 4)
			{
				cout << endl;
			}
		}
	}
}

void Q1()
{
	const int size = 20;
	int n;
	int list[size]{};
	cout << "How many integers to enter? ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "? ";
		cin >> list[i];
	}
	printData(list, n);
}

void printBar(int list[], int size)
{
	cout << "The bar chart is:\n";
	for (int i = 0; i < size; i++)
	{
		for (int x = 0; x < list[i]; x++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void Q2()
{
	int n, data[20];
	cout << "How many intgers to enter? ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "? ";
		cin >> data[i];
	}
	printBar(data, n);
}

int largest(int list[], int size)
{
	int largest = 0;
	for (int i = 0; i < size; i++)
	{
		if (largest < list[i])
		{
			largest = list[i];
		}
	}
	return largest;
}
double average(int list[], int size)
{
	double avg = 0;
	for (int i = 0; i < size; i++)
	{
		avg += list[i];
	}

	return avg * 1.0 / size;
}

void Q3()
{
	int seed, n[20];
	cout << "Please enter the seed value: ";
	cin >> seed;
	srand(seed);
	cout << "The random integers are:";
	for (int i = 0; i < 20; i++)
	{
		n[i] = rand() % 100 + 1;
	}
	printData(n, 20);
	cout << endl
		 << "The largest number is: " << largest(n, 20) << endl;
	cout << "The average value is: " << average(n, 20) << endl;
}

void maxAppear(int list[], int size, int &max, int &freq)
{
	max = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < list[i])
		{
			max = list[i];
			freq = i;
		}
	}
	cout << endl
		 << freq << " appear the most wth " << max << " times";
}

void Q4()
{
	int seed, n[100], freq[11] = {}, max, num;
	cout << "Please enter the seed value: ";
	cin >> seed;
	srand(seed);
	for (int i = 0; i < 100; i++)
	{
		n[i] = rand() % 10 + 1;
		freq[n[i]]++;
	}
	printData(n, 100);
	maxAppear(freq, 11, max, num);
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