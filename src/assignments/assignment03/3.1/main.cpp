//
// Write a short C++ program that
// converts seconds to minutes and seconds.
//
// Copyright (c) Carlos Abraham Hernandez
// <abraham@abranhe.com> (abranhe.com)
//

#include <iostream>
using namespace std;

const int MINUTE = 60;

int main()
{
	int getSeconds, minutes, seconds;

	cout << "This program converts seconds into minutes and seconds.\n";

	cout << "Enter seconds: ";
	cin >> getSeconds;

	minutes = getSeconds / MINUTE;
	seconds = getSeconds % MINUTE;

	cout << "In " << getSeconds << " seconds there are ";

	// Print minute or minutes
	if (minutes == 1)
		cout << minutes << " minute";
	else
		cout << minutes << " minutes";

	cout <<" and ";

	// Print second or seconds
	if (seconds == 1)
		cout << seconds << " second\n";
	else
		cout << seconds << " seconds\n";

  return 0;
}
