package bankaccount;
import java.text.SimpleDateFormat;
import java.util.Date;
public class TestBankAccount {

    public int car = 1;
    public static void main(String[] args){
        
        BankAccount savingAccount = new BankAccount(20000);
        BankAccount checkingAccount = new BankAccount();
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("MM/dd/yyyy");
        
        System.out.println("Account ID: " + savingAccount.getAccountId());
        System.out.println("Balance: $"+ savingAccount.getAccountBalance());
        System.out.println("Monthly Interest:  "+ savingAccount.getMonthlyInterestRate()+"%");
        System.out.println("Created on: "+simpleDateFormat.format(savingAccount.getDateCreated()));
        
        savingAccount.withdraw(2500);
        System.out.println("Balance after withdraw: $"+ savingAccount.getAccountBalance());
        savingAccount.deposit(500);
        System.out.println("Balance after deposit: $"+ savingAccount.getAccountBalance());
        savingAccount.withdraw(10);
        System.out.println("Balance after withdraw: $"+ savingAccount.getAccountBalance());
        
        System.out.println("Account ID: " + checkingAccount.getAccountId());
        System.out.println("Balance: $"+ checkingAccount.getAccountBalance());
        System.out.println("Monthly Interest:  "+ checkingAccount.getMonthlyInterestRate()+"%");
        System.out.println("Created on: "+simpleDateFormat.format(checkingAccount.getDateCreated()));
        
        checkingAccount.withdraw(190);
        System.out.println("Balance after withdraw: $"+ checkingAccount.getAccountBalance());
        checkingAccount.deposit(500);
        System.out.println("Balance after deposit: $"+ checkingAccount.getAccountBalance());
        checkingAccount.withdraw(10);
        System.out.println("Balance after withdraw: $"+ checkingAccount.getAccountBalance());
        
    }
}
