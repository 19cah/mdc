/*
The East Coast sales division of a company generates 62 percent
of total sales. Based on that percentage, write a program that
will predict how much the East Coast division will generate if
the company has $4.6 million in sales this year. 
Display the result on the screen.
Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <iostream>
#include <iomanip>

using namespace std;

double netSales(double percentOfSales, double anualSales);

int main()
{
	double percentOfTotalSells = 62; //Vale Represent percent (%)
	double anualSales = 4600000;

	cout << fixed; //If you don't use this line the result will be in E notation

	cout << "If the company had " << "$" << anualSales << " and ";
	cout << "generates approximately % " << setprecision(2) << percentOfTotalSells;
	cout << " the Net Sales will be ";
	cout << "$" << netSales(62, anualSales) << endl;
	
	/* Are you using Windows OS? -yes uncomment the below code */
	// system("pause");
	return 0;
}

double netSales(double percentOfSales, double anualSales){
	
	return (percentOfSales * anualSales) / 100;
}
