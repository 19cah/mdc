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
        
        final int MIN = 60;
        
        int hours = 0, minutes = 0, remindingSec = 0;
        int seconds = 0;
        
        
        System.out.println("Enter the number of seconds");
        
        //Get User Input
        Scanner userInput = new Scanner(System.in);
        seconds = userInput.nextInt();
        
        hours = (seconds / (MIN * 60));
        remindingSec = (seconds % (MIN * 60));
        minutes = (remindingSec / MIN);
        
        System.out.println("In " + remindingSec + " there are " + hours + " hours " + " and " + minutes + "minutes");
        
 
        
               
    }
    
}
