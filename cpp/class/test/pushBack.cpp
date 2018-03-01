/*#include <iostream>
#include <iomanip>
#include <vector> // To use vectors c++11
// http://www.cplusplus.com/reference/vector/vector/
using namespace std;

int main()
{
    vector<int> values = {1, 2, 3};
    
    for(int i = 0; i < values.size(); i++)
        cout << values[i] << endl;
    
    return 0;
}*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void enterHours(vector<int>& hours, int numOfEmployees);
void displayHours(vector<int>& hours);
double averageFinder(vector<int>& hours);

int main()
{
    int employees;
    vector<int> hours;
    double average;
    
    cout << "how many employess does your company have: "; cin >> employees;
    
    enterHours(hours, employees);
    
    displayHours(hours);
    
    average = averageFinder(hours);
    
    cout << "The average of hours worked is " << average << "." << endl;

    return 0;
}
void displayHours(vector<int>& hours)
{
    for(int i = 0; i < hours.size(); i++)
    {
        cout << "The employee "<< i + 1 << " worked " << hours[i] << " hours."<< endl;
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

//Find average
double averageFinder(vector<int>& hours)
{
    int total = 0;
    double avg = 0.0;
    
    
    if(hours.empty())
    {
        cout << "No values to average. ";
        avg = 0.0;
    }
    else
    {
        for(int count = 0; count < hours.size(); count ++)
        {
            total += hours[count];
        }
        
        avg = total / hours.size();
    }
    
    return avg;
}
