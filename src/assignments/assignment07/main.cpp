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
	cout << "Only for odds numbers." << endl;

	for (int i = 0; i < 15; i++) cout << "-";

	int lastNumber;
	cout << "\nHow many odd numbers do you want to know the square?: ";
	cin >> lastNumber;

	int odd = 1;
	for (int i = 0; i < lastNumber; i++)
	{
		cout << odd << " squared: " << pow(odd, 2) << endl;

		// Increment number by 2 to get odds numbers
		odd += 2;
	}
	return 0;
}
