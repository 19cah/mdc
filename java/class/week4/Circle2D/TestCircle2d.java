/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package circle2d;

public class TestCircle2d {

    public static void main(String[] args){
        Circle2D c1 = new Circle2D(4,4,2);
        
        System.out.println(c1.contains(new Circle2D(2,2,0.2)));
    }
}
