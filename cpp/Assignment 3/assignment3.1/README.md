```cpp
/*
*
*   Write a short C++ program that 
*   converts seconds to minutes and seconds.
*
*   Author: Carlos Abraham Hernandez
*   www.19cah.com   @19cah
*
*/

#include <iostream>
using namespace std;

int main()
{
	int getSeconds, minutes, seconds;
	const int MINUTE = 60;
	
	cout << "This program converts seconds into minutes and seconds.\n";
	
	//Get input from user
	cout << "Enter seconds: ";
	cin >> getSeconds;
	
	minutes = getSeconds / MINUTE;
	seconds = getSeconds % MINUTE;
	
	cout << "In " << getSeconds << " seconds there are ";
	
	//print minute or minutes 
	if (minutes == 1)
		cout << minutes << " minute";
	else
		cout << minutes << " minutes";
	
	cout <<" and ";
	
	//print second or seconds	
	if (seconds == 1)
		cout << seconds << " second\n";
	else
		cout << seconds << " seconds\n";
  
  system("pause");
  return 0;

}
```

