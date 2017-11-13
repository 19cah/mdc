#include <iostream>
using namespace std;

int askForLength();
int askForWidth();
int calculateArea(int length, int width);
void printResult(int area);

int main()
{
    int length, width, area;
   
    length = askForLength();
    width = askForWidth();
    area = calculateArea(length, width);
    printResult(area);
    
}

int askForLength()
{
    int length;
    cout << "Enter length: "; cin >> length;
    return length;
}

int askForWidth()
{
    int width;
    cout << "Enter width: "; cin >> width;
    return width;
}

int calculateArea(int length, int width)
{
    int area;
    area = length * width;
    return area;
}

void printResult(int area)
{
    cout << "The area is: " << area << endl;
}
