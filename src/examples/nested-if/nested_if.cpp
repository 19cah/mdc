/*
*
*   Create an if statement that is nested inside another if statement
*   Nested if statements can be used to test more than one condition
*
*/
#include <iostream>
using namespace std;

int main()
{
	char employed;
	char recentGrand;

	cout << "Are your employed? Enter y for Yes and n for No: "; //Ask user for input
	cin >> employed;
	//cin.ingnore();

	if (employed == 'y')
	{
		cout << "Are you a recent Grad? Please enter y(lower) for Yes and n(lower) for No: ";
		cin >> recentGrand;

		if (recentGrand == 'y')
		{
			cout << "You qualify for the special interest rate\n";
		}
		else
			cout << "You must graduate from college in the past two years to qualify\n";
	}
	else
		cout << "You must be employed to qualify\n";
	
	system("pause");
	return 0;
}
