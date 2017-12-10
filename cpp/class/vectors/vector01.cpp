#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void enterHours(vector<int>& hours, int numOfEmployees);
void displayHours(vector<int>& hours);

int main()
{
    int employees;
    vector<int> hours;
    
    cout << "how many employess does your company have: ";
    cin >> employees;
    
    enterHours(hours, employees);
    
    displayHours(hours);
    
    return 0;
}

void displayHours(vector<int>& hours)
{
    for(int i = 0; i < hours.size(); i++)
    {
        cout << "The hours of the employee "<< i + 1 << " is " << hours[i] << endl;
    }
    
}
void enterHours(vector<int>& hours, int numOfEmployees)
{
    int tempHours;
    for(int i = 0; i < numOfEmployees; i++)
    {
        cout << "Please enter the hours of the employee " << i + 1 << ": "<< endl;
        cin >> tempHours;
        hours.push_back(tempHours);
    }
}
