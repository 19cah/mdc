/*
*
*  	    Use cin.fail() 
*       cin.fail() detects whether the value entered 
*       fits the value defined in the variable.
*       
*   	Author: Carlos Abraham Hernandez
*	
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Enter a number > than 0: ";
    cin >> number;
    
    if(cin.fail())
        cout << "Try Again" << endl;
    else
    {
        if (number > 0)
            cout << "Your number is possitive" <<endl;
        else
            cout <<"The number is negative. Try again" <<endl;
    }        
}
