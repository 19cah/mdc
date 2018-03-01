#include <iostream>
using namespace std;

void minValue(int nums[], int size);
void maxValue(int nums[], int size);
int getArray(int nums[], int size);

int main()
{
    const int SIZE = 10;
   
    int numbers[SIZE]; //= {10, 9, 2, 8, 3, 7, 25, 23, 14, 17};
   
    
   
    for(int i = 0; i < SIZE; i++)
    {
       int userInput;
        cout << "Please enter 1 numbers: ";
		cin >> userInput[SIZE];
		
		userInput = numbers[SIZE];
		minValue(numbers, SIZE);
        maxValue(numbers, SIZE);
		
    }
    
    
    
    
    return 0;
}

void maxValue(int nums[], int size)
{
    int largest = nums[0];

    for(int i = 1; i < size; i++ )
    {
        //cout << nums[i] << endl;

        if(nums[i] > largest)
            largest = nums[i];
    }   
    cout << "The largest number is: " << largest << endl;
}

void minValue(int nums[], int size)
{
    int smallest = nums[0];

    for(int i = 1; i < size; i++ )
    {
        //cout << nums[i] << endl;

        if(nums[i] < smallest)
            smallest = nums[i];
    }   
    cout << "The smallest number is: " << smallest << endl;
}