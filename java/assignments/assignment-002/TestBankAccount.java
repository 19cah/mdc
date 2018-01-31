package bankaccount;

public class TestBankAccount {

    public static void main(String[] args){
        BankAccount savingAccount = new BankAccount(20000);
        BankAccount checkingAccount = new BankAccount();
        
        System.out.println("Account ID:" + savingAccount.getAccountId());
        System.out.println("Balance: $"+ savingAccount.getAccountBalance());
        System.out.println("Monthly Interest:  "+ savingAccount.getMonthlyInterestRate()+"%");
        System.out.println("Created on: ");
        
        
        System.out.println("Balance after withdraw: $"+ savingAccount.withdraw(19000));
        System.out.println("Balance after deposit: $"+ savingAccount.withdraw(2000));
        
    }
}
