```cpp
/*
*
*   Write a short C++ program that will calculate the volume of the
*   cylinder using the following formula:
*
*   Volume = π * radius^2 * height
*
*   Author: Carlos Abraham Hernandez
*
*/

#include <iostream>
#include <cmath> //to use pow();
using namespace std;

const double PI = 3.14159; //assigning value to constant PI

double volumeCalculator(double radius, double height);

int main()
{
	//declaring variables
	double radius = 8.67, height = 25.85, volume;

	volume = volumeCalculator(radius, height);

	//pinting Volume value
	cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is " << volume << endl;

	system("pause");
	return 0;
}

/* Volume Function Calculator */
double volumeCalculator(double radius, double height)
{
	//use volume formula
	double volume = pow(radius, 2) * height * PI;
	return volume;
}
```

[←Back](https://19cah.com/mdc/cpp/)

<p align="center">
   <a href="https://github.com/19cah">
        <img src="https://img.shields.io/badge/Abraham-%4019cah-orange.svg"
            alt="Carlos Abraham"></a>
</p>
