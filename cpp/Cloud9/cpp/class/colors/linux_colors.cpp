#include <iostream>
using namespace std;

int main( void )
{
    for (int i = 31; i <= 37; i++)
    {
        cout << /*"\033[0;" <<*/ i << "mHello!\033[0m" << endl;
        //cout << "\033[1;" << i << "mHello!\033[0m" << endl;
    }
    return 0;
}
 	
