/**
*
*   Use Sentinel to stop a loop 
*   Count customers that entered
*   Calculate amout of profit at the end
*   if every costumer deposit some amout
*
*    Author: Carlos Abraham Hernandez, @19cah
*/

#include <iostream>
using namespace std;

const int MY_SENTINEL = -10;

int main()
{
    double billAmt, totalProfit = 0.0;
    int numCostumers = 0;
    
    cout << "Enter the bill amount: ";
    cin >> billAmt;
    
    //Enter SENTINEL value to stop the loop (-10)
    while(billAmt != MY_SENTINEL)
    {
        totalProfit += billAmt;
        numCostumers++;
        cout << "Enter the bill amount: ";
        cin >> billAmt;
    }
    
    cout << numCostumers << " Customer visits. Total of Profit is :" << totalProfit << endl;
    
    return 0;
}
