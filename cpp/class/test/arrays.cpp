#include <iostream>
using namespace std;

void max_and_small_Calculator(int nums[], int size);

int main()
{
    const int SIZE = 10;
   // int temp = 0;
    int numbers[SIZE] = {10, 9, 2, 8, 3, 7, 1, 23, 14, 17};
    
    
    max_and_small_Calculator(numbers, SIZE);
    
    return 0;
}

void max_and_small_Calculator(int nums[], int size)
{
    int l = nums[0];
    int s = nums[0];
    for(int i = 1; i < size; i++ )
    {
        //cout << nums[i] << endl;

        if(nums[i] > l)
            l = nums[i];
        
        if(nums[i] < s)
            s = nums[i];
    }   
    cout << "The biggest number is: " << l << endl;
    cout << "The smallest number is: " << s << endl;
}


