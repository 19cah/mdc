/*
  In the United States, land is often measured in
  square feet. In many other countries it is measured
  in square meters. One acre of land is equivalent to
  43,560 square feet. A square meter is equivalent to
  10.7639 square feet. Write a program that computes
  and displays the number of square feet and the number
  of square meters ¼ in acre of land. Hint: Because a
  square meter is larger than a square foot, there will
  be fewer square meters in ¼ acre than there are
  square feet.
  Author: Carlos Abraham, @19cah
  www.19cah.com
*/

#include <iostream>
using namespace std;

const double  ACRE = 43560; //square feet
const double SQUARE_METER = 10.7639; // square feet

double squareMeterInAcre(double acre);
double squareFeetInAcre(double acre);

int main()
{
  cout << "In ¼ in acre of land there are " << squareFeetInAcre(0.25)
       << " square feets." << endl;
  cout << "In ¼ in acre of land there are " << squareMeterInAcre(0.25)
       << " square meters." << endl;
	return 0;
}

double squareFeetInAcre(double acre){
  return acre * ACRE;
}

double squareMeterInAcre(double acre){
  return squareFeetInAcre(acre) / SQUARE_METER;
}
