/*
*
*  	    Use isdigit()
*       Return true if it is digit
*       
*   	Author: Carlos Abraham Hernandez, @19cah
*	
*/

include <iostream>
#include <cctype> //may need <ctype.h>
using namespace std;

int main()
{
    int number;
    do{
        cin >> number;
        if(!isdigit(number))
            cout << "Not a number " << endl;
    }while(isdigit(number));
    cout << "number is " << number << endl;
    system("pause");
    return 0;
}
