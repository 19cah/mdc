/*
A car holds 16 gallons of gasoline and can travel
350 miles before refueling. Write a program that
calculates the number of miles per gallon the car
gets. Display the result on the screen.
Author: Carlos Abraham, @19cah
www.19cah.com
*/


#include <iostream>
using namespace std;

double millesPerGallonConsumption(double tankSize, double miles);
int main()
{
  double gasTankHold = 16; // Value in gallons
  double miles = 350; //Miles that the car can travel with fullest tank

  cout << "The car can get ";
  cout << millesPerGallonConsumption(16, 350);
  cout << " miles per gallon." << endl;
	return 0;
}

double millesPerGallonConsumption(double tankSize, double miles){
    return miles / tankSize;
}
