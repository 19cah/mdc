#include <iostream>
using namespace std;

void squareMaker(int length);

int main()
{
    bool valid;
    int num;
    
    do
    {
        cout << "Enter a num: "; cin >> num;
       (num <= 0 || num > 15) ? valid = false : valid = true;
        
       if(!valid) 
           cout << "The number must be positive, and not greater than 15" << endl;
    }
    while(!valid);
    
    squareMaker(num);
    return 0;
}

void squareMaker(int length)
{
    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            cout << "X";
        }
        cout << endl;
    }
}
