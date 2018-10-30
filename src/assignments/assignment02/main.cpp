//
// Write a short C++ program that will calculate the volume of the
// cylinder using the following formula:
// Volume = π * radius^2 * height
//
// Copyright (c) Carlos Abraham Hernandez
// <abraham@abranhe.com> (abranhe.com)
//

#include <iostream>
#include <cmath>
#include "main.h"

using namespace std;

const double PI = 3.14159;

int main()
{
	double radius = 8.67;
	double height = 25.85;
	double volume = volumeCalculator(radius, height);

	cout << "The volume of the cylinder with radius "
		 << radius << " and height " << height
		 << " is " << volume << endl;
	return 0;
}

// Fuction to compute volume
double volumeCalculator(double radius, double height)
{
	return pow(radius, 2) * height * PI;
}
