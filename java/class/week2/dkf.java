/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package test;

/**
 *
 * @author Carlos Abraham @19cah
 */
import static java.lang.Math.random;
import static java.lang.StrictMath.random;
import java.util.Scanner;
import java.util.Random;

public class Test {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int userIn;
    
        int randomNum = (int )(Math.random() * 100 + 1);
       
        do{
            System.out.println("Enter the value: ");
            userIn = scan.nextInt();
            
            if(userIn > randomNum)
                System.out.printf("You should enter a greather value");
            else if(userIn < randomNum)
                System.out.printf("You should enter a less value");
            else
                System.out.printf("You found the value
                
        } 
        while(userIn != randomNum);
       
        
    }
    
}