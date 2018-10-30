/*
Write a program that calculates how much a little league baseball
team spent last year to purchase new baseballs. The program should
prompt the user to enter the number of baseballs purchased and the
cost of each baseball. It should then calculate and display the
total amount spent to purchase the baseballs.
Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <iostream>
using namespace std;


double costOfBaseball();
double costOfBaseball();
double getAmountSpent();

int main()
{
	cout << "The total amount earned is: " << getAmountSpent() << endl;
	
	/* Are you using Windows OS? -yes uncomment the below code */
	//system("pause");
	return 0;
}

double getNumberOfBaseballsPurchased(){
	
	double baseballsPurchased;
	cout << "Enter the number of baseballs purchaed: ";
	cin >> baseballsPurchased;

	return baseballsPurchased;
}

double costOfBaseball(){

	double baseballCost;
	cout << "Enter how much does each baseball cost: ";
	cin >> baseballCost;

	return baseballCost;
}

double getAmountSpent(){
	
	double numberOfBaseballs = getNumberOfBaseballsPurchased();
	double baseballCost = getNumberOfBaseballsPurchased();

	return numberOfBaseballs * baseballCost;
}
