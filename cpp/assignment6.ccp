/**
*
*   Ask the user for their ATM PIN. The program should
*   capture the PIN and compare it to 1111. If the PIN
*   is correct ask the user to select one of the following
*   choices:
*
*    A. Deposit
*    B. Withdraw
*    C. Check Balance
*    D. Exit
*
*   Then say something to the user depending on the
*   selected option.
*
*    Author: (c) Carlos Abraham Hernandez, @19cah
*
*/

#include <iostream>
#include <conio.h> //To use _getch()
#include <string>
#include <Windows.h> //To use setcolor function
using namespace std;

//Function to change color
string setcolor(unsigned short color);

int main()
{
	const int ENTER_KEY = 13; // ASCII value of "ENTER" Key
	const string PIN = "1111"; //Correct PIN
	char pin = ' ', selection;
	string pass = "";

	cout << "Enter the ATM pin to show MENU: ";

	/* =======================================
	HIDE CHARACTERES ENTERED WIHT (*) STARS
	======================================== */

	while (pin != ENTER_KEY) //Execute when the user input != "ENTER" Key
	{
		pin = _getch();
		if (pin != ENTER_KEY)
		{
			pass += pin; //assigning the value of the PIN entered to "pass"
			cout << "*";
		}
	}

	//Validate if PIN entered is correct
	if (pass != PIN)
	{
		setcolor(12); //If PIN isn't correct, print statement in RED
		cout << "\nThe PIN entered is incorrect. Please Try Again.\n";
		setcolor(7);
	}
	else
	{
		//SHOW MENU
		setcolor(2); //If PIN is correct, print statement in GREEN
		cout << endl << "PIN Authorizated ...";
		setcolor(7); //Set Normal Font (Lightgray)
		cout << endl << " Select an option from the menu" << endl;
		cout << "======= MENU =======" << endl;
		cout << " A. Deposit \n B. Withdraw \n C. Check Balance \n D. Exit \nYour Choice: ";
		cin >> selection;

		switch (selection)
		{
			case 'a':
			case 'A':
				cout << "Deposit selected" << endl;
				break;
			case 'b':
			case 'B':
				cout << "Withdraw selected" << endl;
				break;
			case 'c':
			case 'C':
				cout << "Check Balance selected" << endl;
				break;
			case 'd':
			case 'D':
				cout << "Thank you for using COP 1334 ATM Machine. Have a nice day!" << endl;
				break;
			default:
			{
				   setcolor(12);
				   cout << "ERROR" << endl;
				   setcolor(7);
				   break;
			}
		}
	}

	system("pause");
	return 0;
}


/* ===============================================
Set COLORS (2 GREEN) (12 RED) (7 GREY LIGHTGRAY)
================================================ */

string setcolor(unsigned short color) {
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
	return "";
}
