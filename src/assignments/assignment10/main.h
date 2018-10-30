#ifndef _MAIN_H
#define _MAIN_H

void slogan()
{
  std::cout << "                                                                         \n\
     ___           __     ___                      ____    _                            \n\
    / _ \\___  ____/ /__  / _ \\___ ____  ___ ____  / __/___(_)__ ___ ___  _______       \n\
   / , _/ _ \\/ __/  '_/ / ___/ _ `/ _ \\/ -_) __/ _\\ \\/ __/ (_-<(_-</ _ \\/ __(_-<    \n\
  /_/|_|\\___/\\__/_/\\_\\_/_/   \\_,_/ .__/\\__/_/   /___/\\__/_/___/___/\\___/_/ /___/ \n\
                  _____         /_/                                                      \n\
                 / ___/__  __ _  ___                                                     \n\
                / (_ / _ `/  ' \\/ -_)                                                   \n\
                \\___/\\_,_/_/_/_/\\__/                                                  \n";
}

void displayChoice(std::string result)
{
  if(result == "win")
  {
    std::cout << "                                                  \n\
                  __  __            _      ___ _  __                \n\
                  \\ \\/ /__  __ __  | | /| / (_) |/ /              \n\
                   \\  / _ \\/ // /  | |/ |/ / /    /               \n\
                   /_/\\___/\\_,_/   |__/|__/_/_/|_/                \n";
  }
  else if(result == "lose")
  {
      std::cout << "                                                \n\
                  __  __               __    ____  _____ ______     \n\
                  \\ \\/ /___  __  __   / /   / __ \\/ ___// ____/  \n\
                   \\  / __ \\/ / / /  / /   / / / /\\__ \\/ __/    \n\
                   / / /_/ / /_/ /  / /___/ /_/ /___/ / /___        \n\
                  /_/\\____/\\__,_/  /_____/\\____//____/_____/     \n";
  }

  else if(result == "tie")
  {
    std::cout << "                                                   \n\
                    ________________                                 \n\
                   /_  __/  _/ ____/                                 \n\
                    / /  / // __/                                    \n\
                   / / _/ // /___                                    \n\
                  /_/ /___/_____/                                    \n";
  }
}

void instructions()
{
    std::cout << "                                                   \n\
                RULES                                                \n\
                Scissors cuts paper.                                 \n\
                Paper covers rock.                                   \n\
                Rock crushes scissors.                               \n\
                                                                     \n\
                Select your option:                                  \n\
                *******************                                  \n\
                                                                     \n\
                1. ROCK                                              \n\
                2. PAPER                                             \n\
                3. SCISSORS                                          \n";

}

int getUserChoice();
int getComputerChoice();
std::string determineWinner(int userValue, int cpuValue);
void whatWasSelected(int value);

#endif
