/*
Write a program that computes the tax and tip on a restaurant bill for a patron
with a $44.50 meal charge. The tax should be 6.75 percent of the meal cost.
The tip should be 15 percent of the total after adding the tax. Display the meal
cost, tax amount, tip amount, and total bill on the screen.
Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <iostream>
#include <iomanip>

using namespace std;

//Both TAX & TIP represent values in (%)
double TAX = 6.75;
double TIP = 15.0;

void displayOrderDatails(double mealCost, double taxAmount, double tipAmount, double total);
double totalAfterTaxAndTips(double amountWithTax, double tips);
double mealCostAfterTax(double mealCost, double taxAmount);
double taxAmount(double mealCost);
double tipAmount(double mealCost);


int main()
{
	double billCost = 44.5;
	double tax = taxAmount(billCost);
	double tips = tipAmount(billCost);
	double total = totalAfterTaxAndTips(mealCostAfterTax(billCost, tax), tips);

	displayOrderDatails(billCost, tax, tips, total);
	
	system("pause");
	return 0;
}
void displayOrderDatails(double mealCost, double taxAmount, double tipAmount, double total){
	
	cout << fixed;
	cout << "Order Details"<< endl;
	cout << "=================" << endl;
	cout << "Meal Cost: $" << setprecision(2) << mealCost << endl;
	cout << "Tax Amount $" << setprecision(2) << taxAmount << endl;
	cout << "Tip Amount: $" << setprecision(2) << tipAmount << endl;
	cout << "=================" << endl;
	cout << "Total: $" << setprecision(2) << total << endl;
}

double taxAmount(double mealCost)
{
	return (mealCost * TAX) / 100;
}

double mealCostAfterTax(double mealCost, double taxAmount)
{
	return taxAmount + mealCost;
}

double tipAmount(double mealCostAfterTax)
{
	return (mealCostAfterTax * TIP) / 100;
}

double totalAfterTaxAndTips(double amountWithTax, double tips)
{
	return amountWithTax + tips;
}
