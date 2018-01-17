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
import java.util.Scanner;

public class Test {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        String binaryString;
        int binary;
   
        System.out.println("Enter the value in binary: ");
        binaryString = scan.next();
       
        binary = Integer.parseInt(binaryString);
            
        for(int i = 0; i < binaryString.length(); i++){
            
        }
        
    }
    
}