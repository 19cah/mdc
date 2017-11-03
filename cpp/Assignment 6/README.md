# Assignment  6

The purpose of this exercise is to give you some experience at working with switch statements
Write a short program that asks the user for their ATM PIN. The program should
capture the PIN and compare it to `1111` (Hint: use an integer constant). If the
user entered `PIN` matches `1111` the program should present the following menu:

```
Welcome to COP 1334 ATM Machine. Please select from one of the following
choices:
    A. Deposit
    B. Withdraw
    C. Check Balance
    D. Exit 
    
    Your Choice:
 ```
 
 Note: the user can enter upper or lower case for the menu choices so your
    programming logic needs to mitigate that. The program should display an
    error message if the user enters anything other than allowed menu choices.
    Also, use defensive programming technique discussed in class to make sure
    the user enters correct data type for both the PIN and menu choices. The
    program should display simple message for each menu option. i.e. should the
    user select Deposit, then the program needs to display: `Deposit selected`.
    In case the Exit menu option is selected, the program needs to
    display: `Thank you for using COP 1334 ATM Machine. Have a nice day!`
 
 
### Steps:
 
 
Prompt the user for their `PIN`. Make sure the pin is an integer and reject all other data types with an error message: `Wrong data type. Please run the program again!`

Reject user `PIN` if it is a negative number. If the user enters negative `PIN`, the program needs to display the following error message: `Error! Invalid PIN. Please run the program again!`

Reject all the `PIN`s user enters that are not equal to `1111`. Display the following message if the user enters a wrong PIN: `Error! Invalid PIN. Please run the program again!`

Once the user enters a correct `PIN`, present them with a menu followed by a prompt to enter their choice. Make sure the user can enter only `A,a,B,b,C,c, or D,d`. Reject any other input and display the following error message: `Please run the program again and enter A|a, B|b, C|c or D|d only!`

Once the user enters a correct `PIN`, present them with a menu followed by a prompt to enter their choice. 
If the user enters: 

`A` or `a`, the program needs to display: `Deposit selected`

`B` or `b`, the program needs to display: `Withdraw selected`

`C` or `c`, the program needs to display: `Check Balance selected`

`D` or `d`, the program needs to display: `Thank you for using COP 1334 ATM Machine. Have a nice day!`



copyrigth (c) [Abraham @19cah](https://github.com/19cah)
