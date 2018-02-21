package bankaccount;

/* Test Bank Account */
public class TestBankAccount {

    public static void main(String[] args){
        
                                    //Set balance to $20,000
        BankAccount savingAccount = new BankAccount(20000);
        
                    //Set Annual Interest Rate to 4.5%
        savingAccount.setAnnualInterestRate(4.5);
        
        //Withdraw $2,500
        savingAccount.withdraw(2500);
        
        //Deposit $3,000
        savingAccount.deposit(3000);
        
        //Dysplay Bank Acount Data
        BankAccount.displayData(savingAccount);
    }
}
