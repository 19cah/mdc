/*
*
*  	Write a Program that takes three arguments 
*	and print it in a Celcius to Fahrenheit table
*   
*   Author: Carlos Abraham Hernandez, www.19cah.ml
*	
*  	twitter.com/19cah    github.com/19cah
*  	facebook.com/19cah	 stackoverflow.com/story/19cah
*	  instagram.com/19cah	 linkedin.com/in/19cah
*	  bitbucket.org/19cah  19cah.visualstudio.com 
*/

#include <iostream>
#include <iomanip>  //setprecision()
using namespace std;

int main() {

	double lower, higher, interval, celcius, fahrenheit;
	 
	// Get lower limit
	do
	{
		cout << "Please give in a lower limit, limit >= 0: ";
		cin >> lower;
	} while (!(lower >= 0));

	// Get higher limit
	do
	{
		cout << "Please give in a lower limit, 10 => limit <= 5000: ";
		cin >> higher;
	} while (!(higher >= 10 && higher <= 5000));

	//Get the interval or step
	do
	{

		cout << "Please give in a step: 0 < step <= 10: ";
		cin >> interval;
	} while (interval < 0 && interval >= 10);

	cout << endl; //Blank line between questions and the table

	celcius = lower; // assing the value of lower to celcius

	//Print Celcius, Fahrenheit and the lines below
	cout << "Celcius \t Fahrenheit\n";
	cout << "------- \t ----------\n";

	while (celcius < higher)
	{
		/* Covert from Celcius to Fahrenheit */
		fahrenheit = (9.0 * celcius) / 5.0 + 32.0;
		
		//Print Celcius and Fahrenheit values
		cout << fixed; //to use decimals
		cout << setprecision(5) << celcius << " \t " << setprecision(5) << fahrenheit << endl;
		celcius += interval;  //increase by interval
	}
	
	system("pause");
	return 0;
}
