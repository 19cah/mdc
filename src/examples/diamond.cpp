/*
Write a program that displays the following pattern on the screen:
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <iostream>
using namespace std;
void diamond(int height);
int main()
{
  //Enter height and you are done
  diamond(4);
	return 0;
}

void diamond(int height)
{
    /* MAKE THE TRIAGLE THAT MAKES THE DIAMOND UPPER SIDE */
    for(int i = 0; i < height; i++)
    {
      for(int j = 0; j < height - i - 1; j++)
      {
        cout << " ";
      }
      for(int k = 0; k < i; k++)
      {
        cout << "*";
      }
      for(int l = 0; l < i + 1; l++)
      {
        cout << "*";
      }

      cout << endl;
  }
    /* MAKE THE TRIAGLE THAT MAKES THE DIAMOND DOWN SIDE */

    /* Decrease the height to print
    one row less than the original triagle */
    
    --height;
    
    for(int i = 0; i < height; i++)
    {
      for(int j = 0; j < i + 1 ; j++)
      {
        cout << " ";
      }
      for(int k = 0; k < height - i; k++)
      {
        cout << "*";
      }
      for(int l = 0; l < height - i - 1; l++)
      {
        cout << "*";
      }

      cout << endl;
    }
}
