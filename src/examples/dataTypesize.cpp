/*
You have been given a job as a programmer on a Cyborg supercomputer.
In order to accomplish some calculations, you need to know how many bytes
the following data types use: char, int, float, and double. You do not
have any manuals, so you can’t look up this information. Write a
program that will determine the amount of memory used by these types
and display the information on the screen.
Author: Carlos Abraham, @19cah
www.19cah.com
*/


#include <iostream>
using namespace std;

void displayBites();
int main()
{
  displayBites();
	return 0;
}

void displayBites()
{
  cout << "Char: " << sizeof(char) << " bytes." << endl;
  cout << "Int: " << sizeof(int) << " bytes." <<endl;
  cout << "Float: " << sizeof(float) << " bytes." << endl;
  cout << "Double: " << sizeof(double) << " bytes." << endl;
}
