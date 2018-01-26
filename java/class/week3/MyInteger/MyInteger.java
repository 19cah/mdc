
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
    
}
