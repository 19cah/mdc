/**
 * 
 *      Write a program that ask the user for a positive integer no greater than 15.
 *      The program should then display a square on the screen using the character ‘X’.
 *      The number entered by the user will be the length of each side of the square.
 *      For example, if the user enters 5, the program should display the following:
 *       
 *       XXXXX
 *       XXXXX
 *       XXXXX
 *       XXXXX
 *       XXXXX
 *
 *      Author: Carlos Abraham Hernandez, @19cah 
 * 
 */
#include <iostream>
using namespace std;

void squareMaker(int length);

int main()
{
    bool valid;
    int num;
    
    do
    {
        cout << "Enter a num: "; cin >> num;
        
        //Validating user input
       (num <= 0 || num > 15) ? valid = false : valid = true;
        
       if(!valid) 
           cout << "The number must be positive, and not greater than 15" << endl;
    }
    while(!valid);
    
    squareMaker(num);
    return 0;
}

void squareMaker(int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            cout << "X";
        }
        cout << endl;
    }
}
