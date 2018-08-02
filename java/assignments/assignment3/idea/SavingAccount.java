package bankaccount;

/**
 *
 * @author Carlos Abraham Hernandez
 */
public class SavingAccount extends BankAccount {
    
        private double monthlyInterest;
    
    /**
     * Add adding the interest accumulated in a month
     * to the account balance.
     */
        public void addInterest() {  
                monthlyInterest += (getAccountBalance() * getMonthlyInterestRate());
                setAccountBalance(monthlyInterest + getAccountBalance());
        }
}
