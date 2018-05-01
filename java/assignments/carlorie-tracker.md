# Carlorie Tracker

Your doctor says you are too heavy and wants you to keep track of your daily caloric intake. Therefore, she asked you to keep track of how many calories you eat every day on each of your meals \(breakfast, lunch, dinner and snacks\) for a week.

Write a program that stores this information in a two dimensional 7 × 4 array, where each row represents a day of the week and each column represents a different meal. The program should first ask the user to input the data \(calories\) for each meal and day. Then it should create a report that includes the following information:

1. Total caloric consumption for each day of the week.
2. Average daily caloric consumption for the whole week.
3. The smallest amount of calories eaten during the week in any of the meals \(clearly state

   day and meal\).

4. The biggest amount of calories eaten during the week in any of the meals \(clearly state

   day and meal\).

   Additional requirements:

5. Your class must be named CalorieTracker.
6. Create a method to obtain the user input.
7. Create methods to compute and display each of the quantities above \(1-4\).
8. Do not accept negative numbers for calories.


```java
import java.util.*;
public class CalorieTracker {

    static final int DAYS_OF_THE_WEEK = 7;//7;
    static final int NUMBER_OF_MEALS = 4; 
    
    public static void main(String[] args) {
    
    	String[] weekDays = { 
        		"Sunday",
        		"Monday",
        		"Tuesday",
        		"Wednesday",
        		"Thursday",
        		"Friday",
        		"Saturday",
        };
    	
    	String[] meals = {
        		"breakfast",
        		"lunch",
        		"dinner",
        		"snack",
    		};
    	
        //Get User Input and Store the value in the array "table"
    		double[][] table = getUserInput(weekDays, meals);
        System.out.println();   
        
        //Print the values entered by the user as a table, to make it easier to read
        printTable(table, weekDays, meals);
        System.out.println();
        
        //Print the biggest amount of calories eaten during the week
        getMaxValue(table,weekDays, meals);
        
        //Print the smallest amount of calories eaten during the week
        getMinValue(table,weekDays, meals);
        System.out.println();
        
    		//Print total of calories per day
        for (int i = 0; i < DAYS_OF_THE_WEEK ; i++) {
    			System.out.println( "Total of calories on "+weekDays[i]+": "+total(table)[i] + " ");
        }
        
        //Print the average daily calorie consumption for the whole week.
        System.out.printf("\nThe average daily caloric consumption for the whole week: %.2f", getAverage(total(table))); //Using printf to display two decimals points 
         
    }
    
    /**
     *  ========================================
     *   Ask user to enter the calories eaten  
     *	========================================
     */
    public static double[][] getUserInput(String[] days, String[] meals) {
        
        Scanner scan = new Scanner(System.in);
        
        double[][] numbers;
        numbers = new double[DAYS_OF_THE_WEEK][NUMBER_OF_MEALS];
        boolean valid = false;
        double input;
        
        for(int i = 0; i < DAYS_OF_THE_WEEK; i++){
            for(int j = 0; j < NUMBER_OF_MEALS; j++){
            	valid = false;
            	/* Do not accept any NON-POSITIVE or NON-NUMERIC value*/
            	
            	valid = false; //Restart "valid" variable for each new user input
                do {
                	System.out.print("Enter the calories eaten on "+days[i]+ " at "+meals[j]+": ");
                    input = scan.nextDouble();
                    if (input >= 0) {
                        valid = true; 
                    } else {
                        System.out.println("The value entered is not a positive number.");
                    }
                } while (!valid);
                numbers[i][j] = input; //Store the variable "input" in the array
            }
        }
        scan.close();
        return numbers;
    }
    
    /**
     *  =============================
     *  Print values as a table
     *	=============================
     */
    public static void printTable(double[][] numbers, String[] days, String[] meals) {
        
        for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
        		
        		//Display days all in Capital Letter
        		System.out.println(days[row].toUpperCase());
        		for(int col = 0; col < NUMBER_OF_MEALS; col++){
            		
        			//Capitalize the first letter of the meal 
            		System.out.print(meals[col].substring(0,1).toUpperCase()+meals[col].substring(1).toLowerCase()+": "+numbers[row][col]+"\t");
            }
            System.out.println("\n");
        }
        
    }
    
    /**
     *  ====================================================
     *   Calculate the amount of calories consumed each day
     *	====================================================
     */
    public static double[] total(double[][] numbers) {
        double totalPerDay = 0;
        double[] total = new double[DAYS_OF_THE_WEEK];
        
        for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
            for(int col = 0; col < NUMBER_OF_MEALS; col++){
                totalPerDay += numbers[row][col];
            }
            total[row] = totalPerDay;
            totalPerDay = 0;
        }
        return total;
    }
    
    /**
     *  ========================================================================
     *   Calculate the average daily calorie consumption for the whole week.
     *	========================================================================
     */
    public static double getAverage(double[] total) {
        
    		double weekTotal = 0;
    		for(int i = 0; i < DAYS_OF_THE_WEEK; i++){
            weekTotal += total[i];
        }
    		return weekTotal / DAYS_OF_THE_WEEK;
    }
    
   /**
     *  ===========================================================
     *   Get the biggest amount of calories eaten during the week
     *	===========================================================
     */
    public static void getMaxValue(double[][] numbers, String[] days, String[] meals) {
        double maxValue = numbers[0][0];
        String maxCalorieDay = days[0];
        String maxCalorieMeal = meals[0];
        
        
        for(int i = 0; i < DAYS_OF_THE_WEEK; i++){
            for(int j = 0; j < NUMBER_OF_MEALS; j++){
                if (numbers[i][j] > maxValue) {
                    maxValue = numbers[i][j];
                    maxCalorieDay = days[i];
                    maxCalorieMeal = meals[j];
                }
            }
        }
        System.out.println("The biggest amount of calories eaten was "+maxValue+" on "+ maxCalorieDay+" at "+maxCalorieMeal);
        
    }
    
    /**
     *  ===========================================================
     *   Get the smallest amount of calories eaten during the week
     *	===========================================================
     */
     public static void getMinValue(double[][] numbers, String[] days, String[] meals) {
        double minValue = numbers[0][0];
        String minCalorieDay = days[0];
        String minCalorieMeal = meals[0];
        
        
        for(int i = 0; i < DAYS_OF_THE_WEEK; i++){
            for(int j = 0; j < NUMBER_OF_MEALS; j++){
                if (numbers[i][j] < minValue) {
                    minValue = numbers[i][j];
                    minCalorieDay = days[i];
                    minCalorieMeal = meals[j];
                }
            }
        }
        System.out.println("The smallest amount of calories eaten was "+minValue+" on "+ minCalorieDay+" at "+minCalorieMeal);
        
    }
}
```
