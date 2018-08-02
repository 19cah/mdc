package bankaccount;

/**
 * 
 * @author Carlos Abraham Hernandez
 */
public class CurrentAccount extends BankAccount {
    
        private double overdraftLimit;

        /**
         * Overdraft limit setter
         * @param overdrafLimit
         */
        public void setOverdraftLimit(double overdrafLimit) {
                this.overdraftLimit = overdrafLimit;
        }

        /**
         * Overdraft limit getter
         * @return overdraft Limit
         */
        public double getOverdraftLimit() {
                return overdraftLimit;
        }
    
    
    /**
     * Extract money from the account balance
     * 
     * @param moneyOut money that will be extracted from the account.
     * @return difference of the account balance and the money 
     *           the costumer want to extract.
     */
    @Override
    public double withdraw(double moneyOut){
    
        //Allow transaction if the user have enough money
        if (getAccountBalance()< moneyOut)
            System.out.println("You dont have enough money");
        else
            setAccountBalance(getAccountBalance() - moneyOut) ;
        
        // Remind the user, they are using overdraft service
        if (getAccountBalance()+ getOverdraftLimit() > moneyOut){    
                System.out.println("You are using our overdraft service");
                setAccountBalance(getAccountBalance() - moneyOut) ;
        }
        else
        /** 
         * Don't let the user complete transaction if they are 
         * requesting more money than the overdraft limit
         */
            System.out.println("Due you are requesting more money than our overdraft limit"
                    + " is providing, you cannot compleate the transaction.");
        
        return 0;
    }
    
}
