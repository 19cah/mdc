#include <iostream>  

using namespace std;

int main()
{
	int x;
	x = 10;

	int &r = x;		// r is now a nickname for x

	cout << '\n';
	cout << "x = " << x << " and r = " << r << '\n';
	cout << "Now we will set r = 20\n\n";

	r = 20;		// changing r will change x.  They are
			//  now names for the same storage location

	cout << "x = " << x << " and r = " << r << '\n';
}
/*

//pasing by value
#include <iostream>  
using namespace std;

void Twice(int&, int&);			// DECLARE before use

int main()
{
	int x = 5, y = 8;

	cout << "Initial values of variables:\n";
	cout << "\tx = ";
	cout << x;
	cout << "\ty = ";
	cout << y;
	cout << '\n';

	cout << "Calling the function Twice(x,y)\n";

	Twice(x,y);
	
	cout << "The new values of x and y are:\n";
	cout << "\tx = " << x << "\ty = " << y << '\n';
	cout << "Goodbye!\n";
}

void Twice(int& a, int& b)
{
	a *= 2;
	b *= 2;
}

#include <iostream>
using namespace std;

void changeNum(int& num);
int main()
{
	int num = 0;
	
	changeNum(num);
	
	cout << num;
}

void changeNum(int& num)
{
	num = 5;
}
*/