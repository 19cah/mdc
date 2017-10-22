#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int number = 1, squareNum, finalNum;
  cout << "ODDS NUMBERS" << endl;
  for(int i = 0; i < 13; i++)
  {
    cout << "-";
  }
  cout << "\nHow many numbers you want to know the square?: ";
  cin >> finalNum;

  for(int i = 0; i < finalNum; i++)
  {
    squareNum = pow(number, 2);
    cout << number << " squared: " << squareNum <<endl;
    number += 2;
  }
}
