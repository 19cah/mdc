/*
*
*   Write a short C++ program that will calculate the volume of the
*   cylinder using the following formula:
*
*   Volume = π * radius^2 * height
*
*   Author: Carlos Abraham Hernandez, 19cah.com
*
*/

#include <iostream>
#include <math.h> //to use pow()

using namespace std;

#define pi 3.14159 //remebering  value of pi

int main()
{
	//declaring variables
	float height = 25.85, radius = 8.67, volume;

	//use volume formula 
	volume = pi * pow(radius, 2) * height;

	//print the value to the screen
	cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is " << volume << endl;

	system("pause");
	return 0;

}
