#include <iostream>
using namespace std;

void nChar(int n, char c)
{
	for (int i = 0; i < n; i++)
		cout << c;
}

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		nChar(i, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++)
	{
		nChar(5 - i, ' ');
		nChar(i, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 5; i++)
	{
		nChar(5 - i, ' ');
		nChar(i + i - 1, '*');
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		if (i > 5)
		{
			nChar(i - 5, ' ');
			nChar((10 - i) * 2 - 1, '*');
			cout << endl;
		}
		else
		{
			nChar(5 - i, ' ');
			nChar(i + i - 1, '*');
			cout << endl;
		}
	}
	cout << endl;
	for (int x = 1; x <= 3; x++)
	{
		for (int i = 1; i <= 5; i++)
		{
			nChar(5 - i, ' ');
			nChar(i + i - 1, '*');
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}