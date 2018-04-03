
package sorting;

import java.util.Arrays;

public class BubbleSort {

    public static void main(String[] args) {
        
        
        int [] test = {
            64, 9 ,35 , 6
        };
        
        System.out.println("Unordered array" + Arrays.toString(test));
        
        bubbleSort(test);
        System.out.println("Ordered array" + Arrays.toString(test));
    }
    
    public static void bubbleSort(int [] data){
        boolean swap;
        
        do{
            swap = false;
            
            for(int i = 0; i < data.length -1 ; i ++){
                
                if(data[i] > data[i + 1]){
                    swap(data, i, i+1);
                    swap = true;
                }
            }
        }while(swap);
    } 
    public static void swap(int []data, int i, int j){
        int temp = data[j];
        data[j] = data[i];
        data[i]= temp;
    }
    
}
