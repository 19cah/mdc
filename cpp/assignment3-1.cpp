/*
*
* Write a program that takes as input any change expressed in cents.
* It should then compute the number of half-dollars, quarters, dimes, nickles,and pennies to be returned,
* returning as many half-dollars as possible, then quaters, dimes, nickels, and pennies, in that order.
* For example, 483 cents should be returned as 9 half dollars, 1 quarter, 1 nickel, and 3 pennies.
* Input: Change in cents.  Output: Equivalent change in half-dollars, quarters, dimes, nickels, and pennies.
*
*  Author: Carlos Abraham Hernandez,  @19cah
*/
#include <iostream>
#include <limits> //numeric_limits<stramsize>::max()
using namespace std;

int main()
{
	int getCents = 0, reminder;
	const int HALF_DOLLAR = 50, QUATER = 25, DIME = 10, NICKEL = 5, PENNIE = 1; //Constant Coin Value
	int result_half_dollar, result_quaters, result_dimes, result_nickels; //Result Value by Coin

	cout << "This program calculate the amount of coins in an input expressed in cents.\n";
	/* -- Do not accept any incorrect value --  */
	do
	{
		cout << "How many cents do you have? "; //Ask user for input
		cin >> getCents; //Get input value

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');


		if (!(getCents) || getCents <= 0)
			cout << "Should not be a letter or a non possitive value.\n";

	}
	//Repeat until the user enter a correct value
	while (!(getCents) || getCents <= 0);

	cout << "\n";
	reminder = getCents;

	//Try Half Dollar
	if (reminder >= HALF_DOLLAR)
	{
		reminder = getCents % HALF_DOLLAR;
		result_half_dollar = getCents / HALF_DOLLAR; //Get value of Half Dollar
		cout << "Half Dollar: " << result_half_dollar << endl;
	}
	//Try Quarters
	if (reminder >= QUATER)
	{
		result_quaters = reminder / QUATER; //Get value of Quaters
		reminder %= QUATER;
		cout << "Quaters: " << result_quaters << endl;
	}

	//When use Dimes
	if (reminder >= DIME)
	{
		result_dimes = reminder / DIME; //Get value of Dimes
		reminder %= DIME;
		cout << "Dimes: " << result_dimes << endl;
	}

	//When use Nickels
	if (reminder >= NICKEL)
	{
		result_nickels = reminder / NICKEL; //Get value of Nickels
		reminder %= NICKEL;
		cout << "Nickels: " << result_nickels << endl;
	}

	//When use Pennies (the rest will be the cents)
	if (reminder >= PENNIE) //Don't print 'Pennies' if there are not pennies to print
		cout << "Pennies: " << reminder << endl;

	system("pause");
	return 0;
}
