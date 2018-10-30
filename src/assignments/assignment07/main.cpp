//
// Write a for loop that will display all the odd numbers and their squares
//
// 	Ex:
// 	1 squared: 1
// 	3 squared: 9
// 	5 squared: 25
//
// Copyright (c) Carlos Abraham Hernandez
// <abraham@abranhe.com> (abranhe.com)
//
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number = 1, squareNum, lastNum;

	cout << "ONLY ODDS NUMBERS" << endl;

	for (int i = 0; i < 15; i++)
	{
		cout << "-";
	}

	cout << "\nHow many odd numbers do you want to know the square?: ";
	cin >> lastNum;

	for (int i = 0; i < lastNum; i++)
	{
		squareNum = pow(number, 2);
		cout << number << " squared: " << squareNum << endl;

		// Increment number by 2 to get odds numbers
		number += 2;
	}
	
	return 0;
}
