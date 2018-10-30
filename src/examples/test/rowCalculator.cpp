#include <iostream>
using namespace std;
void calculateTotal(int array[][col], int size);


int main()
{
    const int ROW = 2, COLOMN = 3;
   
    int array[ROW][COLOMN] = {{1,2,3},{1,2,3}};
    calculateTotal(array, COLOMN);
    
}

void calculateTotal(int array[][COL], int size)
{
     int total = 0;
    for(int row = 0; row < size; row++)
    {
        for(int colomn = 0; colomn < colomn; colomn++)
        {
           // cout << array[row][colomn] << " ";
            total += array[row][colomn]; 
        }
        
    }
    cout << total<< endl;
}
