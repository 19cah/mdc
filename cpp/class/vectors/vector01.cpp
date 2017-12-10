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
