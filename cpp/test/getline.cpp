#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, studentMajor;
	double studentGPA;

	cout << "Please enter your name \n";
	getline(cin, name);
	
	cout << "Please enter your GPA \n";
	cin >> studentGPA;
	
	cout << "Please enter your major: \n";
	cin.ignore(); //Use it to ignore the Enter key 
	getline(cin, studentMajor);
	
	cout << "Your name is " << name << endl;
	cout << "Your GPA is " << studentGPA << endl;
	cout << "Your major is: " << studentMajor << endl;
	
	//system("pause");
	return 0;
}
