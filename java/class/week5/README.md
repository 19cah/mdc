# Week 5

## Try & Catch

```java

package javaapplication2;

/**
 *
 * @author carlos.hernandez107
 */
import java.util.*;
public class JavaApplication2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws InterruptedException {
           
        Scanner input = new Scanner(System.in);
        boolean continueInput = true;
        
        do{
            try{
                System.out.println("Enter int: ");
                int number = input.nextInt();
                
                System.out.println("Numb: "+ number);
            }
            catch(InputMismatchException e){
                System.out.println("Try Again");
                input.nextLine();
            }
        }
        while(continueInput);
    }
    
}
```
