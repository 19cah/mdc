# Assignment 4

Add the following to the BankAccount class:

- Add a new private field password of type String. 
- Add an accessor method for the password field.
- Modify the no-arg constructor to create a default account:
- Initialize the accountId with a randomly generated 4 digit String.
- Initialize the password with a randomly generated 4 letter String.
- Default accountBalance to 0.
- Modify the one-arg constructor into a two-arg constructor to create an account with a specific name and an initial balance (constructor arguments). 
- Initialize the accountId with a randomly generated 4 digit String.
- Initialize the password with a randomly generated 4 letter String.

- Write a test program (class TestBankAccount) that completely tests the BankAccount and all related classes.
- Displays a menu for the user with the following options (use an input dialog with a list):

```
Please Choose an Action
Create a New Account
Deposit
Withdraw
Display Balance
Exit
```

### If the user selects option 1:

- Display an input dialog(s) asking for the user’s name, initial amount and type of account (Basic, Savings, Current). 
- Create a new account and set the user name and amount.
- Display the accountId and password for the user.
- Redisplay the main menu.

### If the user selects option 2:

- Display an input dialog(s) asking for the amount to deposit and the accountId and password for the account where the money will be deposited. 
- Add the deposit amount to the appropriate account
- Redisplay the main menu.

### If the user selects option 3:

- Display an input dialog(s) asking for the amount to withdraw and the accountId and password for the account from where the money will be withdrawn. 
- Verify the count has enough money to satisfy the transaction. Show an error message if it doesn’t.
- Subtract the withdraw amount from the appropriate account.
- Redisplay the main menu.

### If the user selects option 4:

- Display an input dialog(s) asking for accountId and password and display the type of account, account balance, interest rate and date created (message dialog).
- Redisplay the main menu.

### If the user selects option 5:

- Display a confirm dialog with the message “Do you Want to Exit?”
- Exit if the user answers YES.
- Redisplay the main menu if the user answers NO.
 
