/**
 * 
 *    Write a value returning function called kilograms2Pounds
 *    that will convert kilograms to pounds. The conversion
 *    factor is 2.2 (1 kilogram has 2.2 lbs). Capture the weight
 *    and pass it to the kilograms2Pounds function. The program
 *    should display the original weight in kilograms along with
 *    the weight calculated by the function.
 *
 *    Author: Carlos Abraham Hernandez.
 *
 */
#include <iostream>
#include <string>
using namespace std;

double askForKg();
double kg_to_lb(double kilograms);

int main()
{
    double kilograms, pounds;
    string auxVerb, add_an_s;

    kilograms = askForKg();
    pounds = kg_to_lb(kilograms);

    (kilograms == 1) ? auxVerb = "is " : auxVerb = "are ";
    (kilograms == 1) ? add_an_s = " " : add_an_s = "s ";


    cout << endl;
    cout << kilograms << " kg"<< add_an_s << auxVerb << pounds << " lbs." << endl;

}

double askForKg()
{
    double kilograms;

    cout << "Please enter a value in kilograms (kg) to convert it to pounds (lb): ";
    cin >> kilograms;

    while(cin.fail())
    {
        cout <<"Please enter a value in (kg) to convert it to (lbs): ";
        cin.clear();
        cin.ignore();
        cin>> kilograms;
    }
    return kilograms;
}

double kg_to_lb(double kilograms)
{
    const double TO_KG = 2.2;
    return kilograms * TO_KG;
}
