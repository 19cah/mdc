package sorting;

import java.util.Arrays;

public class SelectionSort {

    public static void main(String[] args) {
        
        
        int [] test = {64, 9 ,35 , 6};
        
        System.out.println("Unordered array" + Arrays.toString(test));
        
        selectionSort(test);
        System.out.println("Ordered array" + Arrays.toString(test));
    }
 
    
    private static void selectionSort(int[] data){
       
        int startScan, minIndex, minValue; 

        for (startScan = 0; startScan < data.length; startScan++){
        
            minIndex = startScan;
            minValue = data[startScan];
  
            for(int index = startScan + 1; index < data.length; index++){
                if (data[index] < minValue){
                    minValue = data[index];
                    minIndex = index;
                }
            }
  
        data[minIndex]  = data[startScan];
        data[startScan] = minValue;
        }
    }
}
