#include <iostream>
using namespace std;

int main()
{
	int minutes, seconds, second;
	
	cout << "Enter seconds: ";
	cin >> seconds;
  
  
  minutes = seconds / 60;
	second = seconds % 60;
  
  
  cout << "minutes: " << minutes << endl;
	cout << "seconds: " << second << endl;
  
  system("pause");

}
