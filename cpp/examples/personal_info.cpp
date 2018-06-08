/*
Write a program that displays the
following information, each on a separate line:
  Your name
  Your address, with city, state, and zip code
  Your telephone number
  Your college major
Author: Carlos Abraham, @19cah
www.19cah.com
*/

#include <iostream>
#include <string>
using namespace std;

void personalInformation();
void name(string name);
void direction(string address, string city, string state, int zipCode);
void telephoneNumber(string phone);
void major(string major);

int main()
{
  personalInformation();
	return 0;
}

void personalInformation()
{
  name("Abraham");
  direction("123 N Test Street", "Miami", "FL", 12345);
  telephoneNumber("3051234567");
  major("Computer Science");
}

void name(string name)
{
  cout << "Name: "
       << name << endl;
}

void direction(string address, string city, string state, int zipCode)
{
  cout << "Address: "
       << address << " "
       << city << ", "
       << state << " "
       << zipCode << endl;
}

void telephoneNumber(string phone)
{
  cout << "Telephone Number: "
       /* For Any Country Phone Number */
       //<< phone << endl;

       /* For US Phone Numbers */
       << "(" << phone.substr(0,3) << ")"
       << phone.substr(3,3) << "-"
       << phone.substr(6,4) << endl;
}

void major(string major)
{
  cout << "Major: "
       << major << endl;
}
