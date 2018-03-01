/**
 *
 * Author: Carlos Abraham, @19cah
 */
public class TestStock {
    public static void main(String[] args){
        Stock s1 = new Stock("FB","Facebook, Inc.", 100, 150);
        Stock s2 = new Stock("AAPL","Apple, Inc.", 47, 35);
        Stock s3 = new Stock("AMZN ","Amazon, Inc.", 47, 35);
        
        
        System.out.println("Stock Symbol: "+s1.getSymbol());
        System.out.println("Stock Name: " + s1.getName());
        System.out.println("Previous Price: "+ s1.getPreviousClosingPrice());
        System.out.println("Current Price: "+ s1.getCurrentPrice());
        System.out.println("Previous Price: "+ s1.getChangePercent());
        System.out.println("\n");
        
        System.out.println("Stock Symbol: "+s2.getSymbol());
        System.out.println("Stock Name: " + s2.getName());
        System.out.println("Previous Price: "+ s2.getPreviousClosingPrice());
        System.out.println("Current Price: "+ s2.getCurrentPrice());
        System.out.println("Previous Price: "+ s2.getChangePercent());
        System.out.println("\n");
        
         
        System.out.println("Stock Symbol: "+s3.getSymbol());
        System.out.println("Stock Name: " + s3.getName());
        System.out.println("Previous Price: "+ s3.getPreviousClosingPrice());
        System.out.println("Current Price: "+ s3.getCurrentPrice());
        System.out.println("Previous Price: "+ s3.getChangePercent());
        System.out.println("\n");
        
    }
    
}
