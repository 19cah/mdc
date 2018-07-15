
package sorting;

import java.util.Arrays;
import java.util.Random;

public class InsertionSort {

    public static void main(String[] args) {
        
        
        double [] test = {64, 9 ,35 , 6, 43, 7, 19, 88};
        
        System.out.println("Unordered array" + Arrays.toString(test));
        
        insertionSort(test);
        System.out.println("Ordered array" + Arrays.toString(test));
    }
 
    
   public static void insertionSort(double[] list) {
    
    for (int i = 1; i < list.length; i++) {
      /** insert list[i] into a sorted sublist list[0..i-1] so 	that list[0..i] is sorted. */
      double currentElement = list[i];
      int k;
      for (k = i - 1; k >= 0 && list[k] > currentElement; k--) {
        list[k + 1] = list[k];
      }

      // Insert the current element into list[k+1]
      list[k + 1] = currentElement;
    }
  }

}



