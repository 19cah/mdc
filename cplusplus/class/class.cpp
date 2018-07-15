#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	const int ENTER_KEY = 13;
	const string PIN = "1111";
	char pin = ' ';
	string pass = "";

	cout << "Enter password: ";

	while (pin != ENTER_KEY)
	{
		pin = _getch();
		if (pin != ENTER_KEY)
		{
			pass += pin;
			cout << "*";
		}
	}
	cout << endl;
	cout << pass;
	if (pass == PIN)
		cout << "\nPassword accepted\n";
	else
		cout << "\nwrong password\n";

//	system("pause");
}