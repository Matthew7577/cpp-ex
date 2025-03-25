/*
SEHH2042 Group Project - Student Management System - Group 8
Lecture Group: B03
Group Members:
1. Leung Yam Lam Matthew 24161883A
2. Unknown
3. Unknown
4. Unknown
5. Unknown
6. Unknown
Complete List of Requirements (maybe)
R0 - Completed by: Leung Yam Lam Matthew 24161883A
R1
R1.1
R1.2
R2
R3
R4
R4.1
R4.2
R4.3
R4.4
R4.5
R5
R6
R7
R8
R9
R10
*/

// Header files
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// Namespace
using namespace std;

// Function prototypes
string formatStudentName(string name);
void clearScreen();
void defaultData();
void checkLoaded();
void loadStartingData();
void printLine(string ch, int count);
void showStudentRecords();
void editStudents();
void addDeleteStudents();
void generateTranscript();
void creditsAndExit();
void mainMenu();
class Student;

// Global variables
bool dataLoaded = false;
const int currentYear = 2024;
vector<Student> students;

// Student's class
class Student // Not completed
{
public:
	string studentName;
	string studentID;
	string studentMajor;
	int studentYear;
	float studentGPA;
	string studentSubjectCode;
	string studentSubjectName;
	int studentCredit;
	string studentGrade;
	int studentCohort;

	Student(string name, string id, string major, int year, float gpa)
	{
		// Everything should check if the data is valid or not
		studentName = formatStudentName(name);
		studentID = id;
		studentMajor = major;
		studentYear = year;
		studentGPA = gpa;
		studentCohort = currentYear - year + 1;
	}

	void displayStudent()
	{
		cout << "Student Name: " << studentName << endl;
		cout << "Student ID: " << studentID << endl;
		cout << "Student Major: " << studentMajor << endl;
		cout << "Student Year: " << studentYear << endl;
		cout << "Student GPA: " << studentGPA << endl;
		cout << "Student Subject Code: " << studentSubjectCode << endl;
	}

	string generateStudentID() // Not completed
	{
		string studentID;
		int checkdigit = 0;
		int randomNumber = rand() % 1000;
		studentID = to_string(studentCohort - 2000) + (randomNumber < 100 ? (randomNumber < 10 ? "00" : "0") : "") + to_string(randomNumber);
		for (int i = 0; i <= 4; i++)
		{
			checkdigit += studentID[i] - '0';
		}
		checkdigit = checkdigit % 10;
		studentID = "S" + studentID + to_string(checkdigit);
		cout << checkdigit << endl;
		return studentID;
	}
};

// Format students name
string formatStudentName(string name) // Should be usable (Test in another cpp file)
{
	string formatedFullName;
	size_t surnameSpacePos = name.find(" ");
	string surname(name, 0, surnameSpacePos);
	string givenName(name, surnameSpacePos + 1);
	for (int i = 0; i < surname.length(); i++)
	{
		surname[i] = toupper(surname[i]);
	}
	givenName[0] = toupper(givenName[0]);
	size_t givenNameSpacePos = givenName.find(" ");
	if (givenNameSpacePos != -1)
	{
		givenName[givenNameSpacePos + 1] = toupper(givenName[givenNameSpacePos + 1]);
	}
	formatedFullName = surname + " " + givenName;
	return formatedFullName;
}

// Clear screen (Compatible with linux/MacOS)
void clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

// Wait for second (Compatible with linux/MacOS)
void waitForSecond(int seconds){
	#ifdef _WIN32
	Sleep(seconds * 1000);
	#else
	usleep(seconds * 100000);
	#endif
}

// Default data
void defaultData() // Not completed
{
	students.push_back(Student("CHAN Tai Man", "S243560", "Information Engineering", 1, 4.00));
	students.push_back(Student("CHEUNG Jacky", "S232210", "Civil Engineering", 2, 2.48));
	students.push_back(Student("PAN Peter", "S222343", "Global Business", 3, 3.42));
	students.push_back(Student("WONG Kam", "S244617", "Educational Psychology", 1, 2.86));
	// waitForSecond(1);
}

// Check data loaded or not
void checkLoaded()
{
	if (!dataLoaded)
	{
		cout << "Data not loaded!" << endl;
		// waitForSecond(1);
	}
}

// Load starting data
void loadStartingData() // Not completed
{
	cout << "Loading data..." << endl;
	// waitForSecond(1);
	defaultData();
	dataLoaded = true;
	// Load data here
	cout << "Data loaded successfully!" << endl;
	// waitForSecond(1);
}

// Print table's line (Nice)
void printLine(string ch, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << ch;
	}
}

// Wait for input to return main menu
void pressAnyKeyToExit()
{
	cout << "Press any key to return main menu..." << endl;
	cin.ignore();
	cin.get();
}

// Show student records
void showStudentRecords() // Not completed
{
	checkLoaded();
	clearScreen();
	if (!dataLoaded)
		return;
	int inputOption;
	cout << "********** Students Records **********" << endl;
	cout << "[1] Sort by students name (Ascending)" << endl;
	cout << "[2] Sort by GPA (Descending)" << endl;
	cout << "**************************************" << endl;
	cout << "Option ( 1 - 2 ): ";
	cin >> inputOption;
	vector<Student> sortedStudents = students;
	switch (inputOption)
	{
	case 1:
		
		break;
	case 2:
		break;
	default:
		cout << "Invalid option!\n\nReturning to main menu..." << endl;
		waitForSecond(1);
		mainMenu();
		break;
	}
	clearScreen();
	cout << "┌";
	printLine("─", 32);
	cout << "┬";
	printLine("─", 12);
	cout << "┬";
	printLine("─", 32);
	cout << "┬";
	printLine("─", 6);
	cout << "┬";
	printLine("─", 6);
	cout << "┐" << endl;

	cout << "│" << setw(32) << left << "Student Name"
		 << "│" << setw(12) << left << "Student ID"
		 << "│" << setw(32) << left << "Major"
		 << "│" << setw(6) << left << "Year"
		 << "│" << setw(6) << left << "GPA"
		 << "│" << endl;

	cout << "├";
	printLine("─", 32);
	cout << "┼";
	printLine("─", 12);
	cout << "┼";
	printLine("─", 32);
	cout << "┼";
	printLine("─", 6);
	cout << "┼";
	printLine("─", 6);
	cout << "┤";
	cout << endl;
	// Sort here
	for (const auto &student : students)
	{
		cout << "│" << setw(32) << left << student.studentName
			 << "│" << setw(12) << left << student.studentID
			 << "│" << setw(32) << left << student.studentMajor
			 << "│" << setw(6) << left << student.studentYear
			 << "│" << setw(6) << left << setprecision(2) << fixed << student.studentGPA
			 << "│" << endl;
	}
	cout << "└";
	printLine("─", 32);
	cout << "┴";
	printLine("─", 12);
	cout << "┴";
	printLine("─", 32);
	cout << "┴";
	printLine("─", 6);
	cout << "┴";
	printLine("─", 6);
	cout << "┘" << endl;
	cout << endl;
	pressAnyKeyToExit();
}

// Edit students records
void editStudents() // Not completed
{
	checkLoaded();
	if (!dataLoaded)
		return;
	int editStudentOption;
	string studentID;
	cout << "Input the student ID you want to edit: ";
	cin >> studentID;
	// if-else of checking student ID is match with the student ID in the system or vaild or not
	while (true)
	{
		clearScreen();
		cout << "Action for Student ID: " << studentID << endl;
		cout << "***** Edit Student Menu *****" << endl;
		cout << "[1] Edit Student Name" << endl;
		cout << "[2] Edit Major" << endl;
		cout << "[3] Edit Subject List" << endl;
		cout << "[4] Return to Main Menu" << endl;
		cout << "*****************************" << endl;
		cout << "Option (1 - 4): ";
		cin >> editStudentOption;
		switch (editStudentOption)
		{
		case 1:
			cout << "Editing student name..." << endl;
			break;
		case 2:
			cout << "Editing major..." << endl;
			break;
		case 3:
			cout << "Editing subject list..." << endl;
			break;
		case 4:
			cout << "Returning to main menu..." << endl;
			// waitForSecond(1);
			break;
		default:
			cout << "Invalid option! Please try again.\n";
			break;
		}
	}
}

// Add or Delete students
void addDeleteStudents() // Not completed
{
	checkLoaded();
	if (!dataLoaded)
		return;
	cout << "Adding/Deleting student..." << endl;
}

// Generate transcript for students
void generateTranscript() // Not completed
{
	checkLoaded();
	if (!dataLoaded)
		return;
	cout << "Generating transcript..." << endl;
}

// Credits and exit
void creditsAndExit() // Not completed
{
	string exitOption = "n";
	cout << "Are you sure you want to exit? (y/N): ";
	cin >> exitOption;
	cout << endl;
	if (exitOption == "y" || exitOption == "Y")
	{
		cout << left << setw(25) << "Group members: " << setw(20) << "Student ID: " << setw(20) << "Tutorial Group: " << endl;
		cout << left << setw(25) << "Leung Yam Lam Matthew" << setw(20) << "24161883A" << setw(20) << "B03D" << endl;
		cout << left << setw(25) << "Unknown" << setw(20) << "Unknown" << setw(20) << "Unknown" << endl;
		cout << left << setw(25) << "Unknown" << setw(20) << "Unknown" << setw(20) << "Unknown" << endl;
		cout << left << setw(25) << "Unknown" << setw(20) << "Unknown" << setw(20) << "Unknown" << endl;
		cout << left << setw(25) << "Unknown" << setw(20) << "Unknown" << setw(20) << "Unknown" << endl;
		cout << left << setw(25) << "Unknown" << setw(20) << "Unknown" << setw(20) << "Unknown" << endl;
		// waitForSecond(1);
		exit(0);
	}
	else if (exitOption == "n" || exitOption == "N")
	{
		cout << "Returning to main menu..." << endl;
		// waitForSecond(1);
	}
	else
	{
		cout << "Invalid option! Returning to main menu..." << endl;
		// waitForSecond(1);
	}
}

void mainMenu()
{
	int mainMenuOption;
	while (true)
	{
		clearScreen();
		cout << "Welcome Message designed by your group" << endl;
		cout << "*** SMS Main Menu ***" << endl;
		cout << "[1] Load Starting Data" << endl;
		cout << "[2] Show Student Records" << endl;
		cout << "[3] Add/Delete Students" << endl;
		cout << "[4] Edit Students" << endl;
		cout << "[5] Generate Transcript" << endl;
		cout << "[6] Credits and Exit" << endl;
		cout << "*********************" << endl;
		cout << "Option (1 - 6): ";
		cin >> mainMenuOption;
		cout << endl;
		switch (mainMenuOption)
		{
		case 1:
			loadStartingData();
			break;
		case 2:
			showStudentRecords();
			break;
		case 3:
			addDeleteStudents();
			break;
		case 4:
			editStudents();
			break;
		case 5:
			generateTranscript();
			break;
		case 6:
			creditsAndExit();
			break;
		default:
			cout << "Invalid option! Please try again.\n";
			// waitForSecond(1);
			break;
		}
	}
}

int main()
{
	mainMenu();
	return 0;
}
