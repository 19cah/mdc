/*
*
*
*   Use switch, to print the number of a phone keyword
*
*   Author: Carlos Abraham Hernandez, @19cah
*
*/

#include <iostream>
using namespace std;

int main()
{
    char answer;
    cout << "Entere a letter: ";
    cin >> answer;
    
    switch(answer)
    {   
        //Number 2
        case 'A':
        case 'a':
        case 'B':
        case 'b':
        case 'C':
        case 'c':
            cout << "You entered 2\n";
            break;
        //Number 3    
        case 'D':
        case 'd':
        case 'E':
        case 'e':
        case 'F':
        case 'f':
            cout << "You entered 3\n";
            break;
         //Number 4
        case 'G':
        case 'g':
        case 'H':
        case 'h':
        case 'I':
        case 'i':
            cout << "You entered 4\n";
            break;
        // Number 5   
        case 'J':
        case 'j':
        case 'K':
        case 'k':
        case 'L':
        case 'l':
            cout << "You entered 5\n";
            break;
        //Number 6
        case 'M':
        case 'm':
        case 'N':
        case 'n':
        case 'O':
        case 'o':
            cout << "You entered 6\n";
            break;
        //Number 7
        case 'P':
        case 'p':
        case 'Q':
        case 'q':
        case 'R':
        case 'r':
        case 'S':
        case 's':
            cout << "You entered 7\n";
            break;
        //Number 8
        case 'T':
        case 't':
        case 'U':
        case 'u':
        case 'V':
        case 'v':
            cout << "You entered 8\n";
            break;
        //Number 9
        case 'W':
        case 'w':
        case 'X':
        case 'x':
        case 'Y':
        case 'y':
        case 'Z':
        case 'z':
            cout << "You entered 9\n";
            break;    
        default:
            cout <<"Error\n";
    }
    return 0;
}
