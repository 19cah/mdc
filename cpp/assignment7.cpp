/**
*
*    Write a for loop that will display all the odd numbers and their squares
*    Ex: 
*	      “1 squared: 1”
*	      “3 squared: 9”
*	      “5 squared: 25”
*
*   (c) Carlos Abraham Hernandez, @19cah 
*
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number = 1, squareNum, lastNum;
	
	cout << "ONLY ODDS NUMBERS" << endl;
	
	// Print --- below Header 
	for (int i = 0; i < 15; i++)
	{
		cout << "-";
	}

	//How many numbers the user want to know the square
	cout << "\nHow many odd numbers do you want to know the square?: ";
	cin >> lastNum;

	//loop
	for (int i = 0; i < lastNum; i++)
	{
		squareNum = pow(number, 2);
		cout << number << " squared: " << squareNum << endl;
		//Increment number by 2 to get odds numbers
		number += 2;
	}

	system("pause");
	return 0;
}
