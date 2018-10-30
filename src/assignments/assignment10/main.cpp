//
// Write a program that lets the user play the game
// Rock, Paper Scissors against the computer.
//
// Font Generator:
// www.patorjk.com/software/taag/
//
// Copyright (c) Carlos Abraham Hernandez
// <abraham@abranhe.com> (abranhe.com)
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "main.h"

using namespace std;

const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

int main()
{
  int computerChoice, userSelection;
  string name, result;
  char again = 'y';

  // To print what was selected
  string cpuSelection;

  slogan();
  do
  {
    instructions();
    userSelection = getUserChoice();
    computerChoice = getComputerChoice();
    result = determineWinner(userSelection, computerChoice);


    cout << "              The computer selected: ";
    whatWasSelected(computerChoice);
    displayChoice(result);

    // Repeat game if the user want
    cout << "Would you like to play Again? Y/N ";
    cin >> again;
  }
  while(again == 'y' || again == 'Y');

  return 0;
}

int getUserChoice()
{
  int userInput;

  cout << endl;
  cout << "              Select your choice: ";
  cin >> userInput;

  // Ingnore any invalid value entered (Must be 1,2 or 3)
  while(cin.fail() || ((userInput != ROCK) && (userInput != PAPER) && (userInput != SCISSORS)) )
    {
        cin.clear();
        cin.ignore();
        cout << "The value must be Rock(1), Paper(2) or Scissors(3)" << endl;
        cout << endl << "Your Choice is: "; cin >> userInput;
    }
  return userInput;
}

// Generate a random number
int getComputerChoice()
{
  unsigned int seed = time(0);
  srand(seed);
  return rand() % 3 + 1;
}

// Determine who is the winner
string determineWinner(int userValue, int cpuValue)
{
  string result;

  // Returns the result depending on the user choice
  ((userValue == ROCK && cpuValue == SCISSORS)
    || (userValue == PAPER && cpuValue == ROCK)
    || (userValue ==  SCISSORS && cpuValue == PAPER))
      ? result = "win"
      : result = "lose";

  if(userValue == cpuValue) result = "tie";
  return result;
}


// Print cpu selection
void whatWasSelected(int value)
{
  if(value == 1)      cout << "Rock" << endl;
  else if(value == 2) cout << "Paper" << endl;
  else if(value == 3) cout << "Scissors" << endl;
}
