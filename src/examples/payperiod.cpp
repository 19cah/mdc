/*
A particular employee earns $32,500 annually.
Write a program that determines and displays
what the amount of his gross pay will be for
each pay period if he is paid twice a month
(24 pay checks per year) and if he is paid
bi-weekly (26 checks per year).
Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <iostream>
using namespace std;

double biMothlyPayment(double annualSalary);
double biWeeklyPayment(double annualSalary);

const int BI_MONTHLY_PAYCHECKS = 24;
const double BI_WEEKLY_PAYCHECKS = 26;

int main()
{
  double annualSalary = 32500;
  cout << "When salary is $"
       << annualSalary
       << " every paycheck is: "
       << endl;

  cout << "Paid twice a month: $" << biMothlyPayment(annualSalary) << endl
       << "Paid bi-weekly: $" << biWeeklyPayment(annualSalary) << endl;

 	return 0;
}

double biMothlyPayment(double annualSalary)
{
  // 24 pay checks annually
  return annualSalary / (double)BI_MONTHLY_PAYCHECKS;
}

double biWeeklyPayment(double annualSalary)
{
  // 26 pay checks annually
  return annualSalary / (double)BI_WEEKLY_PAYCHECKS;
}
