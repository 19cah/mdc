package bankaccount;

import java.text.SimpleDateFormat;
import java.util.Date;

public class BankAccount {
    private int accountId;
    private double accountBalance;
    private double annualInterestRate; 
    private Date dateCreated = new Date();
    private static SimpleDateFormat simpleDateFormat = new SimpleDateFormat("MM/dd/yyyy");
    
    
    public BankAccount() {
        accountId =  generateRandomAccountID();
    }

    public BankAccount(double accountBalance) {
        accountId =  generateRandomAccountID();
        this.accountBalance = accountBalance;
    }
    
    //Four Digits Random Generator
    public int generateRandomAccountID(){
       return (int)(Math.random()*9000)+1000;
    }
    
    public int getAccountId() {
        return accountId;
    }

    public double getAccountBalance() {
        return accountBalance;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public Date getDateCreated() {
        return dateCreated;
    }

    public void setAccountBalance(double accountBalance) {
        this.accountBalance = accountBalance;
    }

    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }
    
    //Return monthly interest rate 
    public double getMonthlyInterestRate(){
        return annualInterestRate/12; // 12 => Months of the year
    }
    
    //Method to withdraw money from the bank account
    public double withdraw(double moneyOut){
        return accountBalance -= moneyOut ;
    }
     
    //Method to deposit money from the bank account
    public double deposit(double moneyIn){
        return accountBalance += moneyIn;
    }
    
    //Display Data to the costumer
    public static void displayData(BankAccount bankAccount){
        System.out.println("Account ID: " + bankAccount.getAccountId());
        System.out.println("Balance: $"+ bankAccount.getAccountBalance());
        System.out.println("Monthly Interest:  "+ bankAccount.getMonthlyInterestRate()+"%");
        System.out.println("Created on: "+ simpleDateFormat.format(bankAccount.getDateCreated()));
    }
}
