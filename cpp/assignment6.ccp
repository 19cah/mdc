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
using namespace std;


int main()
{
	const int ENTER_KEY = 13; // ASCII value of "ENTER" Key
	const string PIN = "1111"; //Correct PIN
	char pin = ' ', char selection;
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
		cout << "\nThe PIN entered is incorrect. Please Try Again.\n";
	else
	{
		//SHOW MENU
		cout << endl << "Select an option from the menu" << endl;
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
			cout << "ERROR" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
