/*
*
*   A movie theater only keeps a percentage of the revenue earned from ticket sales.
*   The remainder goes to the movie distributor.
*   Write a program that calculates a theater’s gross and net box office profit for a night.
*   The program should ask for the name of the movie, and how many adult and child tickets were sold.
*   (The price of an adult ticket is $10.00 and child’s ticket is $6.00.)
*   It should display a report similar to:
*
*   Movie Name:                                       “Wheels of Fury”
*
*   Adult Ticket Sold:                                       382
*
*   Child Ticket Sold:                                       127
*
*   Gross Box Office Profit:                             $ 4,582.00
*
*   Net Box Office Profit:                               $   916.40
*
*   Movie Theater Revenue:                               $ 3,665.60
*
*   Author: Carlos Abraham Hernandez, @19cah
*
*/

#include <iostream>
#include <iomanip> //setw() setprecision()
#include <string>
using namespace std;

int main()
{
  string movieName;
  int adults, children;
  const double ADULT_PRICE = 10.0, CHILD_PRICE = 6.0;
  double grossOfficeProfit, netBoxOffice , movieTheaterRevenue;

  cout << "This program calculates a theater's gross and box office revenue\n";
  cout << "What is the title of the movie:\t";
  getline(cin, movieName); //To get the complete title sentence;
  cout << "How many adult tickets were sold: ";
  cin >> adults;
  cout << "How many child tickets were sold: ";
  cin >> children;

  //Gross Box Office Profit
  grossOfficeProfit = (adults * ADULT_PRICE) + (children * CHILD_PRICE);

  cout << "Movie Name: "<< setw(43) << movieName << endl;//fixed <<"\"" << movieName <<"\"";
  cout << "Adult Ticket Sold: " << setw(26) << adults <<endl;
  cout << "Child Ticket Sold: " << setw(26) << children <<endl;
  cout << "Gross Box Office Profit: " << setw(26) << setprecision(2) << fixed <<"$ " << grossOfficeProfit << endl;

  //Net Box Office Profit or 20 % of Revenue
  netBoxOffice = (grossOfficeProfit * 20) / 100;

  cout << "Net Box Office Profit: " << setw(26) <<"$ " << netBoxOffice << endl;

   // Movie Theater Revenue
   movieTheaterRevenue = grossOfficeProfit - netBoxOffice;

   cout << "Movie Theater Revenue: " << setw(26) <<"$ " << movieTheaterRevenue << endl;















}
