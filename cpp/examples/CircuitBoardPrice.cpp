/*
  An electronics company sells circuit boards
  at a 40 percent profit. Write a program that
  calculates the selling price of a circuit board
  that costs them $12.67 to produce. Display the
  result on the screen.
  Author: Carlos Abraham, @19cah
  www.19cah.com
*/

#include <iostream>
using namespace std;

double sellingPrice(double moneyInvested);
int main()
{
  cout << "Selling Price: " << sellingPrice(12.64) << endl;
	return 0;
}

double sellingPrice(double moneyInvested){
  return (moneyInvested * 100)/60;
}
