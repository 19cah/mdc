/*
*
*  Write a program to determine student classification
*  according with the following schedule:
*
*   < 32 credits                 Freshman
*   < 32 credits >= 32 but < 64  Sophomore
*   < 32 credits >=64 but  < 95  Junior
*   < 32 credits >=96            Senior
*
*   Author: Carlos Abraham Hernandez, @19cah
*
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numCredits;
	const int FRESHMAN = 32, SOPHOMORE = 64, JUNIOR = 95;
	string studentClasification;


	/*	Ask the user for number of credits
	*	compleated, and keep asking if the value
	*   entered isn't a possitive number
	*/

	do
	{
		cout << "What is your College Student Classification?\n";
		cout << "Enter the number of credit that you have compleated: ";
		cin >> numCredits;


		if (cin.fail() || numCredits <= 0)
		{
			cin.clear();
			cin.ignore(); //Ignore when ENTER key pressed
			cout << "The value must be positive and cannot contain letters. Try Again.\n\n";
		}

	}
	while(numCredits <= 0 || cin.fail());

	//Check for Freshman
	if (numCredits < FRESHMAN)
		studentClasification = "Fresham";

	//Check for Sophomore
	else if (numCredits >= FRESHMAN && numCredits < SOPHOMORE)
		studentClasification = "Sophomore";

	//Check for Junior
	else if (numCredits >= SOPHOMORE && numCredits < JUNIOR)
		studentClasification = "Junior";

	//if the number of Credits is grether than 95 always will be Senior
	else
		studentClasification = "Senior";


	cout << studentClasification << endl;

	system("pause");
	return 0;
}
