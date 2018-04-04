package sorting;

import java.util.Arrays;

public class MergeSort {

    public static void main(String[] args) {
        
        
        int [] test = {64, 9 ,35 , 6};
        
        System.out.println("Unordered array" + Arrays.toString(test));
        
        MergeSort(test);
        System.out.println("Ordered array" + Arrays.toString(test));
    }
 
    
    private static void MergeSort(int[] list){
       
        
        if(list.length > 1){
            
            //Merge sort the first half
            int[] firstHalf = new int[list.length /2 ];
            System.arraycopy(list, 0, firstHalf, 0, list.length / 2);
            MergeSort(firstHalf);
            
            //Merge sort the second half
            int secondHalfLength = list.length - list.length / 2;
            int[] secondHalf = new int[secondHalfLength];
            System.arraycopy(list, list.length / 2, secondHalf, 0, secondHalfLength);
            MergeSort(secondHalf);
            
            merge(firstHalf, secondHalf, list);
        }  
    }
    
    public static void merge(int[] list1, int[] list2, int[] temp){
        int current1 = 0;
        int current2 = 0;
        int current3 = 0;
        
        while(current1 < list1.length && current2 < list2.length){
           if(list1[current1] < list2[current2])
               temp[current2++] = list1[current1++];
           else
               temp[current3++] = list2[current2++];
        }
        
        while(current1 < list1.length)
            temp[current3++] = list1[current1++];
            
        while(current2 < list2.length)
            temp[current3++] = list2[current2++];
    }
}
