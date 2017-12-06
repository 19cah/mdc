#include <iostream>
//ifstream ()
//ofstream ()
#include <fstream> //To open a file
#include <string>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("project/sample.txt");

	int numbers;
	while (infile >> numbers)
	{
		cout << "The numbers are " << numbers << endl;
	}

	infile.close();

	system("pause"); 
		return 0;
}
