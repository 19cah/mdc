package calorietracker;


import java.util.*;
public class CalorieTracker {

    static final int DAYS_OF_THE_WEEK = 3;//7;
    static final int NUMBER_OF_MEALS = 4; 
    
    public static void main(String[] args) {
    
        
        double[][] table = getUserInput();
        
        String day;
        String meal;
        
        for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
            
             
             double averageOfCaloriesPerDay = 0;
             
            
            
            switch (row){
                case 0: day = "Sunday";
                    break;
                case 1: day = "Monday";
                    break;
                case 2: day = "Tuesday";
                    break;
                case 3: day = "Wednesday";
                    break;
                case 4: day = "Thursday";
                    break;
                case 5: day = "Friday";
                    break;
                default: day = "Saturday";
                    break;
                    
            }
              
            
            for(int col = 0; col < NUMBER_OF_MEALS; col++){
            
                switch (col){
                case 0: meal = "Breakfast";
                    break;
                case 1: meal = "Lunch";
                    break;
                case 2: meal = "Dinner";
                    break;
                case 3: meal = "Snack";
                    break;
                    
                    
                    
            }
                
                System.out.print(day + "\t" + meal);
                System.out.print(table[row][col]+"\t");
            
            //Store the Sum of the TOTAL of the calories per day on var "caloriesPerDay"
            
            //Store the Average daily caloric consumption per day on var "averageOfCaloriesPerDay"
            averageOfCaloriesPerDay = caloriesPerDay / table.length;
            }
            
            System.out.println(caloriesPerDay +"\t"+ averageOfCaloriesPerDay);
            
         }
         System.out.println("Max: "+ getMaxValue(table)+"\t"+"Min: "+ getMinValue(table));
         
    }
    
    
    
    
    
    
    
     /**
     *  Ask User For Input
     * 
     * @return 
     */
    public static double[][] getUserInput() {
        
        Scanner scan = new Scanner(System.in);
        
        double[][] numbers;
        numbers = new double[DAYS_OF_THE_WEEK][NUMBER_OF_MEALS];
        
        for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
            for(int col = 0; col < NUMBER_OF_MEALS; col++){
            System.out.println("Enter the calories: ");
            numbers[row][col] = scan.nextDouble();
            
            }
        }
        return numbers;
    }
    
    /**
     *  Total
     * 
     * @param numbers
     * @return 
     */
    public static double total(double[][] numbers) {
        double caloriesPerDay = 0;
        
        for(int row = 0; row < DAYS_OF_THE_WEEK; row++){
            for(int col = 0; col < NUMBER_OF_MEALS; col++){
                caloriesPerDay += numbers[row][col];
            }
        }
        return caloriesPerDay;
    }
    
    
    
    
    
    
    /**
     *  Biggest amount of Meal
     * 
     * @param numbers
     * @return 
     */
    public static double getMaxValue(double[][] numbers) {
        double maxValue = numbers[0][0];
        
        for (double[] number : numbers) {
            for (int i = 0; i < number.length; i++) {
                if (number[i] > maxValue) {
                    maxValue = number[i];
                }
            }
        }
        return maxValue;
    }
    
    
    
    
    
    
    
    /**
     *  Smallest amount of Meal
     * 
     * @param numbers
     * @return 
     */
    public static double getMinValue(double[][] numbers) {
        double minValue = numbers[0][0];
        
        for (double[] number : numbers) {
            for (int i = 0; i < number.length; i++) {
                if (number[i] < minValue) {
                    minValue = number[i];
                }
            }
        }
        return minValue ;
    }
}
