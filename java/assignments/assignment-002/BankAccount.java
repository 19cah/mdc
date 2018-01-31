package bankaccount;

import java.util.Date;

public class BankAccount {
    private int accountId;
    private double accountBalance;
    private double annualInterestRate;
    private Date dateCreated = new Date();
    
    public BankAccount() {
        accountId =  (int)(Math.random()*9000)+1000;
    }

    public BankAccount(double accountBalance) {
        accountId =  (int)(Math.random()*9000)+1000;
        this.accountBalance = accountBalance;
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

    public void setAccountId(int accountId) {
        this.accountId = accountId;
    }

    public void setAccountBalance(double accountBalance) {
        this.accountBalance = accountBalance;
    }

    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }

    public void setDateCreated(Date dateCreated) {
        this.dateCreated = dateCreated;
    }
    
    public double getMonthlyInterestRate(){
        return annualInterestRate/12;
    }
    
    public double withdraw(double moneyOut){
        return this.accountBalance -= moneyOut ;
    }
     
    public double deposit(double moneyIn){
        return this.accountBalance += moneyIn;
    }
    
}
