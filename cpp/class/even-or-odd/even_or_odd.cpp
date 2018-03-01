/*
*
*  	Check if a number is Even or Odd

*   Author: Carlos Abraham Hernandez
*	
*/

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Please enter a number: ";
	cin >> number;

	if (number % 2 == 0)
		cout << "The number is even\n";
	else
		cout << "The number is odd\n";
	
	//system("pause");
	return 0;
}
