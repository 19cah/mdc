/**
 * 
 * 
 *    Write a program that lets the user play the game 
 *    Rock, Paper Scissors against the computer.
 * 
 *    Author: 
 *    Carlos Abraham Hernandez
 *    miamidadecollege.ml/assignment10
 *    
 *    View online:
 *    repl.it/@19cah/assignment10
 * 
 *    Font Generator:
 *    www.patorjk.com/software/taag/
 * 
 * 
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void slogan();
void instructions();
int getUserChoice();
int getComputerChoice();
string determineWinner(int userValue, int cpuValue);
void displayChoice(string result);
void whatWasSelected(int value);


const int ROCK = 1, PAPER = 2, SCISSORS = 3;
int main()
{
  int computerChoice, userSelection;
  string name, result;
  char again = 'y';
  
  //To Print what was selected
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
    
    //Repeat Game if the user want
    cout << "Would you like to play Again? Y/N ";
    cin >> again;
  }
  while(again == 'y' || again == 'Y');
  
  //system("pause");
  return 0;
}


// Print "Rock, Paper, Scissors Game"
void slogan()
{
  cout << "   ___           __     ___                      ____    _                        " << endl;
  cout << "  / _ \\___  ____/ /__  / _ \\___ ____  ___ ____  / __/___(_)__ ___ ___  _______    " << endl;
  cout << " / , _/ _ \\/ __/  '_/ / ___/ _ `/ _ \\/ -_) __/ _\\ \\/ __/ (_-<(_-</ _ \\/ __(_-<    " << endl;
  cout << "/_/|_|\\___/\\__/_/\\_\\_/_/   \\_,_/ .__/\\__/_/   /___/\\__/_/___/___/\\___/_/ /___/    " << endl;
  cout << "                _____         /_/                                                 " << endl;
  cout << "               / ___/__  __ _  ___                                                " << endl;
  cout << "              / (_ / _ `/  ' \\/ -_)                                               " << endl;
  cout << "              \\___/\\_,_/_/_/_/\\__/                                                " << endl;
}

// Print Game Instructions
void instructions()
{
  cout << endl;
  cout << "              RULES                   " << endl;
  cout << "              Scissors cuts paper.    " << endl;
  cout << "              Paper covers rock.      " << endl;
  cout << "              Rock crushes scissors.  " << endl;
  cout << "                                      " << endl;
  cout << "              Select your option:     " << endl;
  cout << "              *******************     " << endl;
  cout << "                                      " << endl;
  cout << "              1. ROCK                 " << endl;
  cout << "              2. PAPER                " << endl;
  cout << "              3. SCISSORS             " << endl;
  
}

// Get User Input
int getUserChoice()
{
  int userInput;
  
  cout << endl;
  cout << "              Select your choice: "; 
  cin >> userInput;
  
  //Ingnore any invalid value entered (Must be 1,2 or 3)
  while(cin.fail() || ((userInput != ROCK) && (userInput != PAPER) && (userInput != SCISSORS)) )
    {
        cin.clear();
        cin.ignore();
        cout << "The value must be Rock(1), Paper(2) or Scissors(3)" << endl;
        
        
        cout << endl << "Your Choice is: "; cin >> userInput; 
    }
  return userInput;
}

//Generate a Random Number
int getComputerChoice()
{
  unsigned int seed = time(0);
  
  srand(seed);
  int randomNum = rand() % 3 + 1;
  return randomNum;
}

//Determine who is the Winner
string determineWinner(int userValue, int cpuValue)
{
  string result;
    
  //Return the result depending on the User Choice
  ((userValue == ROCK && cpuValue == SCISSORS) || (userValue == PAPER && cpuValue == ROCK) || (userValue ==  SCISSORS && cpuValue == PAPER)) ? result = "win" : result = "lose";
  
  if(userValue == cpuValue)
    result = "tie";
    
  return result;
}

//Display Game Result
void displayChoice(string result)
{
  if(result == "win")
  {
    cout << endl;
    cout << "              __  __            _      ___ _  __       " << endl;
    cout << "              \\ \\/ /__  __ __  | | /| / (_) |/ /     " << endl;
    cout << "               \\  / _ \\/ // /  | |/ |/ / /    /      " << endl;
    cout << "               /_/\\___/\\_,_/   |__/|__/_/_/|_/       " << endl;
    cout << endl;
  }
  else if(result == "lose")
  {
    cout << endl;
    cout << "              __  __               __    ____  _____ ______     " << endl;
    cout << "              \\ \\/ /___  __  __   / /   / __ \\/ ___// ____/  " << endl;
    cout << "               \\  / __ \\/ / / /  / /   / / / /\\__ \\/ __/    " << endl;
    cout << "               / / /_/ / /_/ /  / /___/ /_/ /___/ / /___        " << endl;
    cout << "              /_/\\____/\\__,_/  /_____/\\____//____/_____/     " << endl;
    cout << endl;
  }
  
  else if(result == "tie")
  {
    cout << endl;
    cout << "                ________________     " << endl;
    cout << "               /_  __/  _/ ____/     " << endl;
    cout << "                / /  / // __/        " << endl;
    cout << "               / / _/ // /___        " << endl;
    cout << "              /_/ /___/_____/        " << endl;
    cout << endl;
  }  
}

// Print CPU selection
void whatWasSelected(int value)
{
  if(value == 1)
    cout << "Rock" << endl;
  else if(value == 2)
    cout << "Paper" << endl;
  else if(value == 3)
    cout << "Scissors" << endl;
}