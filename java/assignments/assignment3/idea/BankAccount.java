package bankaccount;

/**
 *
 * @author Carlos Abraham Hernandez
 */


import java.text.SimpleDateFormat;
import java.util.*;

public class BankAccount {
    
        private String accountId;
        private double accountBalance;
        private static double annualInterestRate; 
        private final Date dateCreated;
        private static SimpleDateFormat simpleDateFormat;
        private String name;
        private String password;
        
        
        /**
        * No arguments constructor.
        * 
        *  Set Account Balance to $0
        */
        public BankAccount() {
                accountId =  Integer.toString(generateRandomAccountID());
                dateCreated = new Date();
                simpleDateFormat = new SimpleDateFormat("MM/dd/yyyy");
                annualInterestRate =  0;
                password = passwordGenerator();
       }
        
        /**
        * Constructor. 
        * 
        * @param accountBalance account balance in the account.
        * @param name name of the costumer
        */
        public BankAccount(double accountBalance, String name) {
                this();
                this.accountBalance = accountBalance;
                this.name = name;
        }   
    
        /**
        * Return a four digits random integer
        * 
        * @return four random integers 
        */
        private int generateRandomAccountID(){
            return (int)(Math.random()*9000)+1000;
        }
        
        /**
        * Get the account ID
        * 
        * @return accountId 
        */
        public String getAccountId() {
            return accountId;
        }
        
                /**
        * Get password
        * 
        * @return password
        */
        public String getPassword() {
            return password;
        }

    /**
     * Get the account balance
     *
     * @return accountBalance
     */
    public double getAccountBalance() {
        return accountBalance;
    }
        
        /**
        * Get the annual interest rate
        * 
        * @return annualInterestRate
        */
        public double getAnnualInterestRate() {
            return annualInterestRate;
        }
        
        /**
        * Get the Bank Account date created
        * 
        * @return dateCreated account date created.
        */
        public String getDateCreated() {
            return simpleDateFormat.format(dateCreated);
        }

        /**
        *
        * @return Name
        */
        public String getName() {
            return name;
        }
        
        /**
        * Sets the user password
        * 
        * @param password
        */
        public void setPassword(String password) {
            this.password = password;
         }
        
        /**
        * Sets Annual Interest Rate
        * 
        * @param accountBalance Account Balance
        */
        public void setAccountBalance(double accountBalance) {
            this.accountBalance = accountBalance;
         }
    
        /**
        * Sets Annual Interest Rate
        * 
        * @param annualInterestRate Annual Interest Rate.
        */
         public void setAnnualInterestRate(double annualInterestRate) {
                BankAccount.annualInterestRate = annualInterestRate;
        }

        /**
        *
        * @param name
        */
        public void setName(String name) {
            this.name = name;
        } 
        
        /**
        * Returns the Monthly Interest Rate, dividing the annual interest rate
        * by the number of month in a year
        * 
        * 12: Months of the year
        *
        * @return monthly interest rate.
        */
        public double getMonthlyInterestRate(){
                return annualInterestRate / 12; 
         }
    
        /**
        * Method to withdraw money from the bank account
        * 
        * @param moneyOut money that will be extracted from the account.
        * @return difference of the account balance and the money deposited.
        */
         public double withdraw(double moneyOut){
        
        //Don't let the user withdraw money if there are
        //not enough money on his balance
        
                if(accountBalance > moneyOut)
                        return accountBalance -= moneyOut ;
                return accountBalance;
        }
     
        /**
        * Method to deposit money from the bank account
        * 
        * @param moneyIn money that will be deposited in the account.
        * @return sum of the account balance and the money deposited.
        */
        public double deposit(double moneyIn){
                return accountBalance += moneyIn;
        }
        
        /**
        * Generate a four digits String Password
        * 
        * @return password
        */
        private String passwordGenerator(){
            String password = "";
            Random r = new Random();
            
            for(int i =  0; i <  4; i++){   
                
                //Generate a random letter
                char c = (char)(r.nextInt(26) + 'a');
                //add letters to create an string
                password += c;
            }
            return password;
        }
}
