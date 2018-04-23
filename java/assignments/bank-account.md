# Bank Account

* Design a class named BankAccount that contains:
* A private int data field named `accountId` for the account.
* A private double data field named `accountBalance` for the account \(default 0\).
* A private double data field named `annualInterestRate` that stores the current interest rate \(default 0\). Assume all accounts have the same interest rate.
* A private Date data field named `dateCreated` that stores the date when the account was created.
* A no-arg constructor that creates a default account and initializes the accountId with a 4 digit random integer.
* A one-argument constructor that creates an account with a specific initial balance \(constructor argument\) and initializes the accountId with a 4 digit random integer.
* The accessor and mutator methods for accountBalance and annualInterestRate.
* The accessor methods for dateCreated and accountId.
* A method named getMonthlyInterestRate\(\) that returns the monthly interest rate. Where monthly interest rate is the annual interest rate divided by 12.
* A method named withdraw\(double\) that withdraws a specified amount from the account
* A method named deposit\(double\) that deposits a specified amount to the account.

Write a test program \(class TestBankAccount\) that creates a BankAccount object with a balance of $20,000, and an annual interest rate of 4.5%. Use the withdraw method to withdraw $2,500, use the deposit method to deposit $3,000 and then print the account id, Balance, the monthly interest, and the date when this account was created \(use console output, see below\).

## Sample output:

```text
Account ID:   1234
Balance:  $20,500
Monthly Interest: 0.375%
Created On: 9/22/2016
```

