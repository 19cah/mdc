#include <iostream>
#include <fstream> //To open a file 
//ifstream
//ofstream 
#include <string>

using namespace std;

int main()
{
	ifstream infile;
	ofstream backup;
	infile.open("home/ubuntu/workspace/MDC/cpp/class/openFile/example.txt");

	if (!infile)
		cout << "The path is incorrect.\n";
	string names;

	backup.open("names.txt");

	while (getline(infile, names))
	{
		backup << "The numbers are " << names << endl;
		cout << "The numbers are " << names << endl;
	}

	infile.close();
	backup.close();

//system("pause");
	return 0;
}