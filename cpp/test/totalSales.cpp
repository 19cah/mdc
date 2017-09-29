/*
*
*  	Write a Program to calculate the total
*	Using setw() and setprecision() fixed;
*   
*   	Author: Carlos Abraham Hernandez
*	
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double day1, day2, day3, total;

	cout << "Enter the sales for day 1: ";
	cin >> day1;
	cout << "Enter the sales for day 2: ";
	cin >> day2;
	cout << "Enter the sales for day 3: ";
	cin >> day3;

	total = day1 + day2 + day3;

	cout << "\n Sales Amount \n";
	cout << "---------------\n";
	cout << setprecision(2) << fixed;
	cout << "Day 1: " << setw(7) << day1 << endl;
	cout << "Day 2: " << setw(7) << day2 << endl;
	cout << "Day 3: " << setw(7) << day3 << endl;
	cout << "Total: " << setw(7) << total << endl;
}
