/*
The different color codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
*/
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string setcolor(unsigned short color){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}

int main(int argc, char** argv)
{
    setcolor(13);
    cout << "Hello ";
    setcolor(11);
    cout << "World!" << endl;
    setcolor(7);
    system("PAUSE");
    return 0;
}