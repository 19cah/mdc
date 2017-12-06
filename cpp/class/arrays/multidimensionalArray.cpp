#include <iostream>
using namespace std;

int main()
{
    const int ROW = 2, COLOMN = 3;
    
    int array[ROW][COLOMN] = {{2,3,4},{5,6,7}};
    
    for(int row = 0; row < ROW; row++)
    {
        for(int colomn = 0; colomn < COLOMN; colomn++)
        {
            cout << array[row][colomn] << " ";
        }
        cout << endl;
    }
}
