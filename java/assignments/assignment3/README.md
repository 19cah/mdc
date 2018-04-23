# Advance BankAccount

* Using the **BankAccount** class as a base class, write two derived classes called **SavingsAccount** and **CurrentAccount**.
* Add a new private field `name` of type `String` to the **BankAccount** class.
* Add accessor and mutator methods for the `name` field.
* A **SavingsAccount** object, in addition to the attributes of a **BankAccount** object, should have a monthlyInterest variable and a method, which adds interest to the account. Assume you are adding the interest accumulated in a month.

```java
//monthlyInterest += (accountBalance * (annualInterestRate / 12))
//accountBalance += monthlyInterest
public void addInterest() {  
//code goes here
};
```

* The **CurrentAccount** class, in addition to the variables of a **BankAccount** class, should have an overdraftLimit variable. Ensure that you override methods of the **BankAccount** class as necessary in both derived classes.
* Create a Bank class, which contains an ArrayList of **BankAccount** objects called `bankAccounts`. `BankAccounts` in the array could be instances of the **BankAccount** class, the **SavingsAccount** class, or the **CurrentAccount** class.
* Write an update method in the **Bank** class. It iterates through each account, updating it in the following ways:
  * Savings accounts get interest added \(via the `addInterest` method\)
  * CurrentAccounts get a letter sent \(`System.out.println`\) if they are in overdraft. \(Hint: use instanceof operator\)
* The Bank class requires methods for **openAccount** and **closeAccount**.
  * `openAccount()` should ask the user for his/her name and what type of bank account \(s\)he wishes to open. Options are Regular Account \(BankAccount object\), Savings \(SavingsAccount object\) or Current \(CurrentAccount object\). Create an object of the appropriate type and add it to bankAccounts.
  * `closeAccount()` should ask the user for his/her name and the account Id and then delete from bankAccounts the account that matches both the name and `accountId`.

    Test all your classes in the TestBankAccount class. Send all output to the console. Use a scanner object to get user responses and `System.out.println` to print to the console.

_Additional Hints:_

* Note that the balance of an account may only be modified through the deposit \(double\) and withdraw \(double\) methods.
* Changes to the original BankAccount class should be minimal.
* Make sure to test what you have done after each step.
* Make sure to include enough testing in TestBankAccount to cover all the functionality implemented.

