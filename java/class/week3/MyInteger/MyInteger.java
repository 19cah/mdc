/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package myinteger;

/**
 *
 * @author carlos.hernandez107
 */
public class MyInteger {

   private int value;

    public MyInteger(int value) {
        this.value = value;
    }

    public int getValue() {
        return value;
    }

    
    public boolean isEven(){
        return MyInteger.isEven(value);
    }
   
   public boolean isOdd(){
       return !isEven();
   }
   
   public static boolean isEven(int numberEven){
       return (numberEven % 2) == 0;
   }
   
   public static boolean isOdd(int numberOdd){
       return !MyInteger.isEven(numberOdd);
   }
   
   public static boolean isEven(MyInteger myInt){
       return myInt.isEven();
   }
   
   public boolean equals(int number){
       return number == value;
   }
   
   public boolean equals(MyInteger number){
       return number.equals(number);
   }
   
   public static int parseInt(char[] digits){
        return Integer.parseInt(new String(digits));
   }
   
    public static int parseInt(String s){
        return Integer.parseInt(s);
   }
    
   public boolean isPrime(){
       if(isEven())
           value = false;
       
       return 
   }
}
