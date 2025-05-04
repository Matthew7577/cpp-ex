// SEHH2042 In-class Exercises (Tutorial Work)
// Program template file
// Do not modify the given codes

// =======================================
// Insert more header files when necessary
// =======================================
#include <iostream>
#include <cstring>
using namespace std;

void showInfo()
{
	cout << "Name      : Leung Yam Lam Matthew\n";
	cout << "Student ID: 24161883A\n";
	cout << "Class     : B03D\n";
}

void Q1()
{
	int x = 1;
	int y[5] = {10, 20, 30, 40, 50};
	int *xPtr = &x, *yPtr = y;
	cout << "Address of x: " << &x << endl;
	cout << "Address of y: " << &y << endl;
	cout << "Value of xPtr: " << xPtr << endl;
	cout << "Value of yPtr: " << yPtr << endl;
	cout << "Meaning of xPtr: " << *xPtr << endl;
	cout << "Meaning of yPtr: " << *yPtr << endl;
	cout << "(*yPtr + 2) == " << (*yPtr + 2) << endl;
	cout << "*(yPtr + 2) == " << *(yPtr + 2) << endl;
	xPtr = yPtr + 2;
	(*xPtr)++;
	(*yPtr)++;
	cout << *xPtr << endl;
	cout << *yPtr << endl;
}

void swapInteger(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void Q2()
{
	int x = 2, y = 5;

	cout << "Before swapping:" << endl;
	cout << "x is: " << x << endl;
	cout << "y is: " << y << endl;

	int *ptr1 = &x;
	int *ptr2 = &y;
	swapInteger(ptr1, ptr2);

	cout << "After swapping:" << endl;
	cout << "x is: " << x << endl;
	cout << "y is: " << y << endl;
}

void printArray(const int[], int);
void multiplyArray(int *const, int, int);

void Q3()
{
	const int arraySize = 10;

	int c[arraySize] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

	cout << "Before multiplyArray, array is: ";
	printArray(c, arraySize);

	multiplyArray(c, arraySize, 3);

	cout << "After multiplyArray, array is: ";
	printArray(c, arraySize);
}

void printArray(const int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void multiplyArray(int *const a, int size, int n)
{
	int *ptr = a;
	for (int i = 0; i < size; i++)
	{
		*ptr *= n;
		ptr++;
	}
}

void Q4()
{
	char *buffer = new char[100]; // reserve 100 characters
	char *word[10] = {};		  // initialize all pointers to 0 (NULL)

	cout << "Enter a sentence with at most 10 words and 100 characters: ";
	cin.ignore();
	cin.getline(buffer, 100);

	char *ptr = buffer;
	int index = 0;

	while (*ptr && index < 10)
	{
		while (*ptr == ' ')
			ptr++;
		if (*ptr == '\0')
			break;
		word[index++] = ptr;
		while (*ptr && *ptr != ' ')
			ptr++;
		if (*ptr)
		{
			*ptr = '\0';
			ptr++;
		}
	}

	for (int i = 0; i < 10; i++)
		if (word[i] != 0) // check if it is a NULL pointer
			cout << i << ": " << word[i] << endl;
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