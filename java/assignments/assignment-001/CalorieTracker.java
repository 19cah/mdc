package calorietracker;


import java.util.*;
public class CalorieTracker {

    static final int DAYS_OF_THE_WEEK = 3;//7;
    static final int NUMBER_OF_MEALS = 3;//4; 
    
    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        double[][] table;
        table = new double[DAYS_OF_THE_WEEK][NUMBER_OF_MEALS];
        
         for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
            for(int col = 0; col < NUMBER_OF_MEALS; col++){
            System.out.println("Enter the calories: ");
            table[row][col] = scan.nextDouble();
            
            }
        }
        
         for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
            
             double caloriesPerDay = 0;
             double averageOfCaloriesPerDay = 0;
             
            String dates;
            switch (row){
                case 0: dates = "Sunday";
                    break;
                case 1: dates = "Monday";
                    break;
                case 2: dates = "Tuesday";
                    break;
                case 3: dates = "Wednesday";
                    break;
                case 4: dates = "Thursday";
                    break;
                case 5: dates = "Friday";
                    break;
                default: dates = "Saturday";
                    break;
                    
            }
            System.out.print(dates + "\t");
             for(int col = 0; col < NUMBER_OF_MEALS; col++){
            
            
            System.out.print(table[row][col]+"\t");
            
            //Store the Sum of the TOTAL of the calories per day on "caloriesPerDay"
            caloriesPerDay += table[row][col];
            averageOfCaloriesPerDay = caloriesPerDay / table.length; 
            
            
            }
            System.out.println(caloriesPerDay +"\t"+ averageOfCaloriesPerDay);
        }
    }
    /*
    public static double AskTheUserForMeals(){
    Scanner scan = new Scanner(System.in);
    
    double[][]arr = new double[DAYS_OF_THE_WEEK][NUMBER_OF_MEALS];
    
        for(int i = 0; i < DAYS_OF_THE_WEEK; i++){
            
           
           switch (row == 0)
                dates = "Sunday";
            else if(row == 1)
                dates = "Monday";
            else if(row == 2)
                dates = "Tuesday";
            else if(row == 3)
                dates = "Wednesday";
            else if(row == 4)
                dates = "Thursday";
            else if(row == 5)
                dates = "Friday";
            else
                dates = "Saturday";
            
            
            for(int j = 0; j < NUMBER_OF_MEALS; j++){
            System.out.println("Enter the calories: ");
            
            }
        }
    }
*/
}


