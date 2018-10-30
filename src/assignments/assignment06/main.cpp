//
// Ask the user for their ATM PIN. The program should
// capture the PIN and compare it to 1111. If the PIN
// is correct ask the user to select one of the following
// choices:
//
// 		A. Deposit
// 		B. Withdraw
// 		C. Check Balance
// 		D. Exit
//
// Then say something to the user depending on the
// selected option.
//
// Copyright (c) Carlos Abraham Hernandez
// <abraham@abranhe.com> (abranhe.com)
//

#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>
#include "main.h"

using namespace std;

int main()
{
	// Ascii value of 'enter' key
	const int ENTER_KEY = 13;
	// Corrent pin
	const string PIN = "1111";
	char pin = ' ', selection;
	string pass = "";

	cout << "Enter the ATM pin to show MENU: ";

	// Hide password entered with stars (***)
	// Execute when the user input != 'enter' key
	while (pin != ENTER_KEY)
	{
		pin = _getch();
		if (pin != ENTER_KEY)
		{
			// Assigning the value of the pin entered to "pass"
			pass += pin;
			cout << "*";
		}
	}

	// Validate if the pin entered is correct
	if (pass != PIN)
	{
		setcolor(12);
		//If pin isn't correct, print statement in red
		cout << "\nThe PIN entered is incorrect. Please Try Again.\n";
		setcolor(7);
	}
	else
	{
		// Show menu
		setcolor(2);

		// If pin is correct, print statement in green
		cout << endl << "PIN Authorizated ...";

		//Set normal color font (Lightgray)
		setcolor(7);
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


/**
 * Function to set color in a Windown machine
 * 2  green
 * 7  gray lightgray
 * 12 red
 */
string setcolor(unsigned short color) {
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
	return "";
}
