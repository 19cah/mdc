#include <iostream>
#include <cstdlib>
using namespace std;

int generateRandomNum();
void printResult(int number);

int main()
{
    int n;
    n = generateRandomNum();
    printResult(n);
    
    return 0;
}

int askForLength()
{
    int length;
    cout << "Enter length: "; cin >> length;
    return length;
}

int generateRandomNum()
{
    //Get the system time
    unsigned int seed;
    seed = time(0);
    
    srand(seed);
    int number = rand();
    
    return number;
}

void printResult(int number)
{
    cout << "The random number is: " << number << endl;
}