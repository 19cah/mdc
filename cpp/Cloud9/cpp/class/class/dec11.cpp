#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct PayRoll
{
    int empNumber;
    string name;
    double hours;
    double payRate;
    double grossPay;
    double grossPay_withTax;
};

int main()
{
    const double TAX = 0.07;
    PayRoll employees;
    
    cout << "Enter the employee's number: " << endl;
    cin >> employees.empNumber;
    
    cout << "Enter employee's name: " << endl;
    cin.ignore();
    getline(cin, employees.name);
    
    cout << "How many hours the employee worked: ";
    cin >> employees.hours;
    
    cout << "What's the employee payRate: ";
    cin >> employees.payRate;
    
    employees.grossPay = (employees.hours * employees.payRate);
    
    cout << "======================================" << endl;
    
    cout << "The employee's number is " << endl;
    cout << employees.empNumber << endl; 
    
    cout << "The employee's name " << endl;
    cout << employees.name << endl;
    
    cout << "The employee worked: ";
    cout <<  employees.hours << endl;
    
    cout << "The employee pay rate is ";
    cout <<  employees.payRate << endl;
    
    cout << "The employee gross pay without tax is: ";
    cout <<  employees.grossPay << endl;
    
    employees.grossPay_withTax = employees.grossPay - (employees.grossPay * TAX);
    cout << "The employee gross pay is: ";
    cout <<  employees.grossPay_withTax << endl;
    
    cout << "The employee gross pay after 2 weeks is: " << endl;
    cout <<  employees.grossPay_withTax * 2 << endl;
}