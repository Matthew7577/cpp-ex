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
	// Fill in your personal particulars below
	cout << "Name      : Leung Yam Lam Matthew\n";
	cout << "Student ID: 24161883A\n";
	cout << "Class     : B03D\n";
}

void Q1()
{
	char text[100];
	cout << "Enter a string: ";
	cin >> text;
	for (int i = 0; text[i] != '\0'; i++)
	{
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] = text[i] - 'a' + 'A';
	}
	cout << "Converted string is: " << text;
}

void swapString(char[], char[]);

void Q2()
{
	char w1[20], w2[20];

	cout << "Enter the two words (separated by space): ";
	cin >> w1;
	cin >> w2;

	cout << "Before swapping, words are:\n";
	cout << w1 << endl
		 << w2 << endl;

	swapString(w1, w2);

	cout << "After swapping, words are:\n";
	cout << w1 << endl
		 << w2 << endl;
}

void swapString(char str1[], char str2[])
{
	char temp[20];
	for (int i = 0; str1[i] != '\0'; i++)
	{
		temp[i] = str1[i];
	}
	for (int i = 0; str2[i] != '\0'; i++)
	{
		str1[i] = str2[i];
	}
	for (int i = 0; temp[i] != '\0'; i++)
	{
		str2[i] = temp[i];
	}
}

void Q3()
{
	char buffer[80];
	char msgs[10][15] = {
		"a", "ab", "abc", "abcd", "abcde", "abcdef", 
		"abcdefg", "abcdefgh", "abcdefghi", "abcdefghij"
	};
	
	// Put strings in msgs into buffer
	// Your codes should be inserted here.
	
	// Print the buffer content
	cout << "buffer is:" << endl;
	cout << buffer;

	// Show the length of buffer, using strlen()
	// Your codes should be inserted here.
}

const int NMSG = 3;		// (Global) maximum no. of messages
const int MAXLEN = 80;	// (Global) maximum length of each message

void printReverse(char [][MAXLEN]);	// prototype

void Q4()
{
	char message[NMSG][MAXLEN];

	// Your code should be inserted here
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