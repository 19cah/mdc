/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.util.Scanner;
/**
 *
 * @author carlos.hernandez107
 */
public class Test {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       
        
        float celcius, fahrenheit;
        
        
        System.out.println("Enter the temperature in Fahrenheit");
        
        //Get User Input
        Scanner userInput = new Scanner(System.in);
        fahrenheit = userInput.nextFloat();
        
        celcius = (float) ((5.0/9.0) *(fahrenheit - 32)); 
        
        System.out.println(fahrenheit + " °Fahrenheit: " + celcius +" °Celcius" );
        
               
    }
    
}
