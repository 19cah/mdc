# Assignemts

The purpose of this exercise is to give you some experience at working with functions.

Write a program that lets the user play the game Rock, Paper Scissors against the computer. The program should work as follows:

When the program begins, a random number in the range of 1 through 3 is generated. If the number is 1, then the computer has chosen rock. If the number is 2, then the computer has chosen paper. If the number is 3, then the computer has chosen scissors. \(Don’t display the computer’s choice yet\).

The user enter his or her choice of “rock”, “paper”, or “scissor” at the keyboard. \(You can use a menu if you prefer.\) The computer’s choice is displayed.

A winner is selected according to the following rules:

If one player choose rock and the other player chooses scissors, the rock wins. \(The rock smashes the scissors.\)

If one player chooses scissors and the other player chooses paper, the scissors wins. \(Scissors cuts paper.\)

If one player choose paper and the other player chooses rock, then paper wins. \(Paper wraps rock.\)

If both players make the same choice, the game must be played again to determine the winner.

Be sure to divide the program into functions that perform each major task.

`getUserChoice()`

`getComputerChoice()`

`determineWinner()`

`displayChoice()`

