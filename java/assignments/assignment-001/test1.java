

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
    
    System.out.println("\nAverage: "+ getAverage(total(table)));
         
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
    public static double getAverage(double[] total) {
        
    		double weekTotal = 0;
    		for(int i = 0; i < DAYS_OF_THE_WEEK; i++){
            weekTotal += total[i];
        }
    		return weekTotal / DAYS_OF_THE_WEEK;
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
