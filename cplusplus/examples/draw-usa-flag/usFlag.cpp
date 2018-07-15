/**
* United States Flag
*
* (c) Carlos Abarham, @19cah  www.19cah.com
*/
#include <iostream>

using namespace std;

int main()
{
	cout << "United States Flag" << endl;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*";
		}
		for (int k = 0; k < 20; k++)
		{
			cout << "=";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << "=";
		}
		cout << endl;

	}
	system("pause");
	return 0;
