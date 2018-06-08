/*
A car with a 20 gallon gas tank averages 21.5 miles per
gallon when driven in town and 26.8 miles per gallon
when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of
gas when driven in town and when driven on the highway.
Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <iostream>
using namespace std;

double distance(double average);
const double FULL_TANK = 20.0; // The tank holds 20 gallons

int main()
{
  /* Average of miles per gallon */
  double averageOnTown = 21.5; // On Town
  double averageOnHighway = 26.8; // On Highway

  cout << "The distance in town is " << distance(averageOnTown) << endl;
  cout << "The distance in highway is " << distance(averageOnHighway) << endl;

	return 0;
}

double distance(double average){
    return average * FULL_TANK;
}
