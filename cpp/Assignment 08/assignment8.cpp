/**
 * 
 *      Write a program that opens the file,
 *      reads all the numbers from the file, 
 *      and calculates the following:
 *      
 *      The number of numbers in the file
 *      The sum of all the numbers in the file (a running total)
 *      The average of all the numbers in the file
 * 
 * 
 *      Author: Carlos Abraham Hernandez, @19cah 
 * 
 */
 
#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

double averageCalculator(double noNumbers, double sum);

int main()
{
	ifstream numbersFile;
	
	//Open File
	numbersFile.open("random.txt");

    //Failure opening file
	if (!numbersFile)
		cout << "Error opening file.\n";
	
	double numbers, amountOf_Numbers = 0, sum = 0, average;

	while (numbersFile >> numbers)
	{
		cout << "The numbers are " << numbers << endl;
		
		//Count the numbers
		amountOf_Numbers++;
		
		//Add numbers
		sum = sum + numbers;
	}
	
	//Find average
	average = averageCalculator(amountOf_Numbers, sum);
	
	
    cout << "There are "<< amountOf_Numbers << " numbers."<< endl;
    cout << "The sum of all numbers in the file is " << sum << endl;
    cout << "The average in the file is " << average << endl;
	
	//Close File
	numbersFile.close();

    //system("pause");
	return 0;
}


/* Average Function Calculator */
double averageCalculator(double noNumbers, double sum)
{
    double average = sum / noNumbers;
    return average;
}
