#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct NBA
{
    string nameOfPlayer;
    int numberOfPlayer;
    int pointsScored;
};

int const SIZE = 3;

void getInfo(NBA players[]);
void showInfo(NBA players[]);
void showHighest(NBA players[]);
int getTotal(NBA players[]);



int main()
{
    NBA player[SIZE];
    
    getInfo(player);
    
    showInfo(player);
    
    cout << "The total is " << getTotal(player) << endl;
    
    showHighest(player);
    
    
    return 0;
}

int getTotal(NBA players[])
{
    int total = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        total += players[i].pointsScored;
    }
    
    return total;
}

void showInfo(NBA players[])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << endl;
        cout << "Player #: " << i + 1 << endl;
        cout << "==================" << endl;
        cout << "The Player's name is: " << players[i].nameOfPlayer << endl;
        cout << "The players number is " << players[i].numberOfPlayer<< endl;
        cout << "The Player Points Scored was: " << players[i].pointsScored;
        cout << endl;
    }
}
void getInfo(NBA players[])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Please enter the player's name: " << endl;
        cin.ignore();
        getline(cin, players[i].nameOfPlayer);
        cout << "Please enter the player's numbers: " << endl;
        cin >> players[i].numberOfPlayer;
        cout << "Please enter the player points scored: " << endl;
        cin >> players[i].pointsScored;
    }
}
void showHighest(NBA players[])

{
    int highest = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        int highestPoint = players[0].pointsScored;
        
        if(players[i].pointsScored > highestPoint )
        {
            highest = players[i].pointsScored;
        }
    }
    
    cout << "The playe who scored the most point " << players[highest].nameOfPlayer << endl;
}
