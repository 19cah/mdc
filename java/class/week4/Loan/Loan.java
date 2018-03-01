package pkgclass;

//import java.text.SimpleDateFormat;
import java.util.*;
public class Loan{
   private double annualInterestRate;
   private int numberOfYears;
   private double loanAmount;
   private Date loanDate;

    public Loan() {
        this(2.5, 1, 1000);
       // loanDate = (2014, 11, 13);
    }

    public Loan(double annualInterestRate, int numberOfYears, double loanAmount) {
        this.annualInterestRate = annualInterestRate;
        this.numberOfYears = numberOfYears;
        this.loanAmount = loanAmount;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public int getNumberOfYears() {
        return numberOfYears;
    }

    public double getLoanAmount() {
        return loanAmount;
    }

    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }

    public void setNumberOfYears(int numberOfYears) {
        this.numberOfYears = numberOfYears;
    }

    public void setLoanAmount(double loanAmount) {
        this.loanAmount = loanAmount;
    }
    
    public double getMonthlyPayment(){
       
        return  (loanAmount *  annualInterestRate) / (1 - Math.pow((1 + annualInterestRate), (-1.0* (numberOfYears*12))));
               
    }
    
    /*
    public doubleTotalPayment(){
        
    }
  */
    
}

 // dateFormatter = new SimpleDateFormat("EEEE, MMMM d, yyyy");
/*LoanAmount = Principal * ( annualInterestRate / (1 - (1 + annualInterestRate)^(numberOfYears^12)))

M = payment amount
P = principal, meaning the amount of money borrowed
J = effective interest rate. Note that this is usually not the annual interest rate; see below for an explanation.
N = total number of payments
*/
