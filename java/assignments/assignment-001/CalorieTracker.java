/*--------------------------------------------------------------------

 Name:  Carlos Abraham Hernandez

 Student ID: ******6424

 COP 2800 - Java Programming 

 Spring 2018 - T Th 6:15PM - 9:30PM

 Project # 1

 Plagiarism Statement

 I certify that this assignment is my own work and that I
 have not copied in part or whole or otherwise plagiarized 
 the work of other students and/or persons.

1234567890123456789012345678901234567890123456789012345678901234567890
--------------------------------------------------------------------*/

package calorietracker;

import java.util.*;
public class CalorieTracker {

    static final int DAYS_OF_THE_WEEK = 3;//7;
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
    	
        double[][] table = getUserInput(weekDays, meals);
         
  
    printTable(table);
    System.out.println();
    getMaxValue(table,weekDays, meals);
    getMinValue(table,weekDays, meals);
    
    System.out.println();
    for (int i = 0; i < DAYS_OF_THE_WEEK ; i++) {
        System.out.print( "total: "+total(table)[i] + " ");
    }
    //System.out.println("Average: "+ getAverage(total(table)));
         
    }
    
    
    
    
    
    
    
    /**
     *  ===========
     *   Ask User
     *	===========
     */
    public static double[][] getUserInput(String[] days, String[] meals) {
        
        Scanner scan = new Scanner(System.in);
        
        double[][] numbers;
        numbers = new double[DAYS_OF_THE_WEEK][NUMBER_OF_MEALS];
        
        
        for(int i = 0; i < DAYS_OF_THE_WEEK; i++){
            for(int j = 0; j < NUMBER_OF_MEALS; j++){
            System.out.print("Enter the calories eaten on "+days[i]+ " at "+meals[j]+": ");
            numbers[i][j] = scan.nextDouble();
            
            }
        }
        scan.close();
        return numbers;
    }
    
    /**
     *  ========================
     *  Print Table
     *	========================
     */
    public static void printTable(double[][] numbers) {
        
        for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
            for(int col = 0; col < NUMBER_OF_MEALS; col++){
                System.out.print(numbers[row][col]+"\t");
            }
            System.out.println();
        }
        
    }
    
    /**
     *  ========================
     *   Total amount of Meal
     *	========================
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
     *  ========================
     *   Average
     *	========================
     */
    public static double getAverage(double total) {
        
    		double average;
    		average = total / (DAYS_OF_THE_WEEK * NUMBER_OF_MEALS);
    		
        return average;
    }
    
    
    
    
    
    /**
     *  ========================
     *   Biggest amount of Meal
     *	========================
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
                    //System.out.println("biggest was "+maxValue+" on "+days[i]+" at "+meals[j]);
                }
            }
        }
        System.out.println("biggest was "+maxValue+" on "+ maxCalorieDay+" at "+maxCalorieMeal);
        
    }
    
    
    
   
    
    /**
     *  ========================
     *   Smallest amount of Meal
     *	========================
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
                    //System.out.println("biggest was "+maxValue+" on "+days[i]+" at "+meals[j]);
                }
            }
        }
        System.out.println("smallest was "+minValue+" on "+ minCalorieDay+" at "+minCalorieMeal);
        
    }
}
