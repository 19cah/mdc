package bankaccount;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.logging.*;

/**
 * Bank Class contains an array list of 
 * 
 * - BankAccount
 * - SavingAccount
 * - Current Account.
 * 
 * @author Carlos Abraham Hernandez
 */
public class Bank{
    
    ArrayList<BankAccount>   bankAccounts;
    Scanner scan = new Scanner(System.in);

    public Bank() {
        this.bankAccounts = new ArrayList<>();
    }
        
    /**
     * UPDATE:
     *  • Saving Account: get interest added
     *  • Current Account: remind the costumer if they are in overdraft 
     */
        public void update(){
            
        //iterate over the arrayList using an enhanced for loop    
        for(BankAccount account : bankAccounts){
                
                if( account instanceof SavingAccount){
                    SavingAccount saving = (SavingAccount) account;
                    
                    //The bank is the only allowed to change anual interest rate
                     saving.setAnnualInterestRate(4.5);  
                     
                     //update balance ading interest
                     saving.addInterest(); 
                }
                
                if(account instanceof CurrentAccount){
                    
                    CurrentAccount current = (CurrentAccount)  account;
                    //The Bank is the only allowed to change the overdraft limit
                    current.setOverdraftLimit(50);
                }       
        }                
    }
   
     /**
      *  Ask the user for his/her name and what
      *  type of bank account (s)he wishes to open.
      */
    
        public void openAccount(){
        
            String name;
            boolean userIsDone ;
                
            scan.nextLine(); //Clear buffer
            System.out.print("What is you name: ");
            name = scan.nextLine();
                    
            do{
                createTypeOfAccount(name);
                
                //Print the information of the last account created
                accountInfo(bankAccounts.size() - 1);
                
                System.out.println("Since you have opened a new account would you like to deposit something now?\n"
                        + "1. Yes\n"
                        + "2. No\n");
                if(scan.nextInt() == 1){
                    System.out.print("Enter the amount you want to deposit: $");
                    bankAccounts.get(bankAccounts.size() - 1).deposit(scan.nextDouble());
                }
                    
                userIsDone = finished();
                }while(!userIsDone);
        }
        
 
    /**
     * Display MENU principal
     */
         
        public void menu(){
            
            boolean invalidInput = false;
            int index;
            int profileMenu;
            boolean logout;
            
            System.out.println("WELCOME to "+Colors.YELLOW+"JAVA\'s Bank\n"
                                                + "======================\n"
                                                +  "\nAre you our costumer?\n"
                                                + "1. Yes\n"
                                                + "2. No, create an account\n");
                
                do{
                        //Accept only numeric values
                        while(!scan.hasNextInt()) {
                         System.out.print(Colors.RED + "You did not selected a valid option\n"
                                                     + Colors.RESET+ "Please Try Again: ");
                         scan.next();
                        }
                        
                        switch(scan.nextInt()){
                                case 1: 
                                    //Back to menu() if there are not accounts in the array list
                                    if(bankAccounts.isEmpty()){
                                        System.out.println("There are not accounts in this bank.\n"
                                                                + "Create an account");
                                        openAccount();  
                                      }
                                      else
                                          index = searching();
                                    break;
                                case 2:
                                        openAccount();
                                     break;
                                default:
                                        invalidInput = true;
                                        System.out.print(Colors.RED + "You did not selected "
                                                        +Colors.RESET+ "Yes(1)" +Colors.RED+" or "
                                                        +Colors.RESET+ "No(2)\n"
                                                        +Colors.RESET+ "Please try again: ");
                                     break;
                                }
                        }while(invalidInput);
                        
                        do{
                        System.out.println("What do you want to do:\n"
                                + "1. Deposit\n"
                                + "2. Withdraw\n"
                                + "3. Open Account\n"
                                + "4. Close Account\n"
                                + "5. View Account Information | View Balance\n"
                                + "6. Change Account Password\n"
                                + "7. Log out\n");
                        
                        profileMenu = scan.nextInt();
                        
                        switch(profileMenu){
                             case 1: //Deposit
                                 index = verify();
                                 if(index != -1){
                                     System.out.print("Enter the amount you want to deposit: ");
                                     bankAccounts.get(index).deposit(scan.nextDouble());
                                 }
                                 logout = false;
                                 break;
                             case 2: //Withdraw
                                 index = verify();
                                if(index != -1){
                                    System.out.print("Enter the amount you want to withdraw: ");
                                    bankAccounts.get(index).withdraw(scan.nextDouble());
                                 }
                                logout = false;
                                break;
                             case 3: //Open Account
                                openAccount();
                                logout = false;
                                break;
                             case 4: //Close Account
                                closeAccount();
                                logout = false;
                                break;
                             case 5://Account Information
                                index = verify();
                                if(index != -1){
                                accountInfo(index);
                                }
                                logout = false;
                                break;
                             case 6: //Change Password
                                    changePassword();
                                   logout = false;
                                    break;
                             default: //Logout
                                logout = true;
                                break;
                         }
                }while(!logout && !bankAccounts.isEmpty());
                        
                        if(bankAccounts.isEmpty())
                            System.out.println("There are not accounts in the bank.");
                        
                        //Message if the user log out
                        System.out.println("Thank for using our services!!! : )");
        }
       
        /**
         * Verifying that account exist
         * 
         * @return method to search for an account in the array list
         */
        private int verify(){
                System.out.println("We need to verify you information before continue.");
                return searching();
        }
        
        
    /**
     *  Ask the user for his/her name and account ID 
     *  and remove account if matches both the name and account ID.
     */
        public void closeAccount(){
                
                int indexInArrayList;
                
                System.out.println(Colors.RED+"CAUTION! This operation cannot be undone");
                //Delete account only if any account exist
                if(!bankAccounts.isEmpty()){
                    indexInArrayList = searching();
                
                    bankAccounts.remove(indexInArrayList);
                    System.out.println(Colors.GREEN+"Account successfully removed.");
                }
                else
                    System.out.println("There are not accounts");
        }
        
        
     /**
      * Ask the user for Account ID and Name then search using 
      * searchIndex() method to locate the index where name and account ID
      * matched with the values entered, if don't match with any value in
      * the array list, returns -1.
      * 
      * @return index in the array
      */
         int searching(){
                
                String name;
                String password;
                int accountID;
                int indexInArrayList;
                int dontMatch = -1;
                int tryAgain;
                
                do{
                        scan.nextLine(); //clearing the buffer
                        System.out.print( "Please enter your name: ");
                        name = scan.nextLine();
                        
                        System.out.print(name+ " enter the four digits account ID: ");
                        accountID = scan.nextInt();
                        
                        scan.nextLine(); //clearing the buffer
                        System.out.print( "Please enter your password: ");
                        password = scan.nextLine();
                        
                        //action No. 3 @see loading() method 
                        loading(Colors.GREEN, 3);
                        
                        //Searching index where match name, account id, and password
                        indexInArrayList = searchingIndex(name, accountID, password);
                       
                        if(indexInArrayList == dontMatch){
                            System.out.println("Try again:\n"
                                    + "1. Yes\n"
                                    + "2. No\n");
                            tryAgain  = scan.nextInt();
                             
                            // Stop asking Try Again, if the user enter a wrong ID or Name
                            if(tryAgain == 2){
                                indexInArrayList = -1;
		break;
		}		
                        }                            
                }while(indexInArrayList == dontMatch);
               return indexInArrayList;
        }
        
    /**
     * Display action and loading ...
     * 
     * @param setColor set color a certain color
     * @param action execute an action:
     * 
     * ACTIONS:
     *         (1) Opening Account
     *         (2) Closing Account
     *         (3) Searching in the database
     */
        private void loading(String setColor, int action){
            
                switch(action){
                        case 1:
                                System.out.print( setColor+"Opening");
                                break;
                        case 2:
                                System.out.print( setColor+"Closing");
                                break;
                        case 3:
                                System.out.print( setColor+"Searching in the database");
                                break;
                        default:
                                System.out.print("");
                }
                
                try {
                        //Number of points to print while loading
                        int numOfPoints = 15;
                    
                        for(int i =  0; i <  numOfPoints; i++){     
                                    System.out.print(setColor +".");
                                    
                                    //wait 0.5 seconds before printing each point
                                    Thread.sleep(500);
                        }
                        //Delete the line printed
                        System.out.print("\b");     
                        
                } catch (InterruptedException ex) {
                    Logger.getLogger(Bank.class.getName()).log(Level.SEVERE, null, ex);
                }
                System.out.println(Colors.RESET);     
        }
        
   /**
    * Display account Information to the costumer
    * 
    * @param index value where is stored the in the array list
    */
        public void accountInfo(int index){
                update();
                System.out.println("\nACCOUNT INFORMATION");
                System.out.print(bankAccounts.get(index).getName()+" | ");
                        typeOfAccount(bankAccounts.get(index));
                System.out.println(" account");
                
                System.out.println("============================================\n"
                                +Colors.RESET+"Account ID: " 
                                +Colors.CYAN+bankAccounts.get(index).getAccountId());
                
                //Display Balance with 2 digits after decimal
                System.out.printf(Colors.RESET+"Account balance: $ " 
                                +Colors.CYAN+ "%.2f\n", bankAccounts.get(index).getAccountBalance());
                
                System.out.println(Colors.RESET+"Account Password: "
                                +Colors.CYAN+ bankAccounts.get(index).getPassword());
                
                System.out.println(Colors.RESET+"Account created on: "
                                +Colors.CYAN+ bankAccounts.get(index).getDateCreated());
                System.out.println();
    }
        
    /**
     * Check what type of account if stored in the array list
     * 
     * NOTE:
     * Check for Saving and Current accounts first because Saving
     * and Current accounts are also Bank Accounts
     * Therefore if any account if checked first will always be
     * a regular account.
     * 
     * @param unknownTypeOfAccount
     */
        private void typeOfAccount(BankAccount unknownTypeOfAccount){
            
            if(unknownTypeOfAccount instanceof SavingAccount){
                System.out.print("Saving");
            }
            else if(unknownTypeOfAccount instanceof CurrentAccount){
                System.out.print("Current");
            }
            else if(unknownTypeOfAccount instanceof BankAccount){
                System.out.print("Regular");
            }
            else
                System.out.print(Colors.RED+"Unknown type of account");
        }
        
    /**
     * Create the type of account the user wants
     * to create and add it to the array list.
     * 
     * @param name name of the user
     */
        private void createTypeOfAccount(String name){
    
            int typeOfAccount;
            boolean invalidInput;
            
            System.out.print("Hello, " +name+ " which type of bank account would"
                                + " you like to open? \n"
                                + "\n 1. Regular Bank Account."
                                + "\n 2. Saving Account."
                                + "\n 3. Current Account."
                                + "\n Your selection: ");
                
                do{
                        //Accept only numeric values
                        while(!scan.hasNextInt()) {
                         System.out.print(Colors.RED+"You did not selected a valid option\n"
                                                                                +Colors.RESET+ "Please Try Again: ");
                         scan.next();
                        }
                        typeOfAccount = scan.nextInt();
                     
                        switch(typeOfAccount){
                            case 1: 
                                BankAccount bankaccount = new BankAccount();
                                //Insert into the array list the name asked
                                bankaccount.setName(name); 
                                bankAccounts.add(bankaccount);
                                loading(Colors.GREEN,1);
                                System.out.println(Colors.GREEN +"You have opened a Regular"
                                + " Account");
                                invalidInput = false;
                            break;
                                
                            case 2:
                                SavingAccount savingaccount = new SavingAccount();
                                savingaccount.setName(name); 
                                bankAccounts.add(savingaccount);
                                loading(Colors.GREEN,1);
                                System.out.println(Colors.GREEN +"You have opened a Saving"
                                + " Account.");
                                invalidInput = false;
                            break;
                                
                            case 3:
                                CurrentAccount currentaccount = new CurrentAccount();
                                currentaccount.setName(name); 
                                bankAccounts.add(currentaccount);
                                loading(Colors.GREEN,1);
                                System.out.println(Colors.GREEN +"You have opened a Current"
                                + " Account.");
                                invalidInput = false;
                            break;
                            default:
                                invalidInput = true;
                                System.out.println( Colors.RED + "You did not selected a "
                                                                        + "correct option to create an account.\n"
                                                                        + Colors.RESET+ "Please try again: ");
                                
                            }
                        }while(invalidInput);
        }
        
    /**
     * Returns index of array list where the costumer accountID
     * and name match with the value entered, otherwise return -1
     * 
     * @param name name of the user
     * @param accountID account ID
     * 
     * @return index of array list
     */
        private int searchingIndex(String name, int accountID, String password){
                    
                boolean matchWithUser = false;
                int index = -1;
                
                for(int i = 0; i < bankAccounts.size(); i++){

            /**
            * Check if the costumer accountID and name
            * match with any value stored in the array list.
            */
                    if(Integer.parseInt(bankAccounts.get(i).getAccountId()) == accountID 
                        && name.equalsIgnoreCase(bankAccounts.get(i).getName())
                        && password.equalsIgnoreCase(bankAccounts.get(i).getPassword())) {
                                        matchWithUser = true;
                                        
                                        if(matchWithUser)
                                            index = i;
                                        else
                                            // Since index in array list should be positive
                                            index = -1; 
                        }
                }
                
                if(matchWithUser){
                        System.out.println(Colors.GREEN+"Account found!");
                         return index;
                }
                else
                        System.out.println(Colors.RED+"Your Name, Account ID, or Password dont"
                                        +" match with our records.");
                return index; //Should be -1
        }
        
    /**
     * Returns True or False whether the user is done or not.
     * Ask the user if he wants to create another account.
     * 
     * @return selection, whether true or false
     */
        private boolean finished(){
                
                boolean selection = false;                
                boolean invalidInput;
            
                        System.out.print("Would you like to open another account? \n"
                                                        + "1. Yes.\n"
                                                        + "2. No.\n"
                                                        + "Your selection: ");
                
                do{
                        //Accept only numeric values
                        while(!scan.hasNextInt()) {
                         System.out.print(Colors.RED+"You did not selected a valid option\n"
                                                                                +Colors.RESET+ "Please Try Again: ");
                         scan.next();
                        }
                        
                        switch(scan.nextInt()){
                                case 1: 
                                     selection =  false;
                                     invalidInput = false;
                                     break;
                                case 2:
                                     selection =  true;
                                     invalidInput = false;
                                     break;
                                default:
                                        invalidInput = true;
                                        System.out.print(Colors.RED+"You did not selected "
                                                                        +Colors.RESET+ "Yes(1)" +Colors.RED+" or "
                                                                        +Colors.RESET+ "No(2)\n"
                                                                        +Colors.RESET+ "Please try again: ");
                                     break;
                                }
 
                        }while(invalidInput);
            return selection;
        }
        
        
      /**
     *  Verify and change password
     * 
     */
        void  changePassword(){
            String newPassword;
            System.out.println("\n"+Colors.RED+"CHANGING PASSWORD. This operation cannnot be undone.");
            int index = verify(); 
            
            //Change password only if the user enter a correct credentials
            System.out.print("Enter a four digits new password: ");
            do{
                newPassword = scan.next();
                if(newPassword.trim().length() != 4){
                    System.out.print("Password invalid, try again: ");
                }
            }
            while(newPassword.trim().length() != 4);
            
            bankAccounts.get(index).setPassword(newPassword);
            System.out.println(Colors.GREEN+"Your password have changed");
        }
}
/**
 *  Assign ANSI escape sequences values
 *  of certain colors to allow formatting
 *  using an string.
 * 
 */
final class  Colors {
    
    public static final String RESET = "\u001B[0m";      
    public static final String YELLOW = "\u001B[33m";
    public static final String RED = "\u001B[31m";
    public static final String GREEN = "\u001B[32m";
    public static final String PURPLE = "\u001B[35m";
    public static final String CYAN = "\u001B[36m";
    
}
