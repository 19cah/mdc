/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testcircle;

/**
 *
 * @author carlos.hernandez107
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author carlos.hernandez107
 */
public class TestCircle {

    /**
     *
     * @param args
     */
    public static void main(String[] args){
        Circle c1 = new Circle();
        Circle c2 = new Circle(5);
        
        System.out.println("Radius of circle 1 is " + c1.getRadius());
        System.out.println("Radius of circle 2 is " + c2.getRadius());
        System.out.println("Area of circle 1 is " + c1.getArea());
        System.out.println("Area of circle 2 is " + c2.getArea());
        System.out.println("Circunference of circle 1 is " + c1.circunference());
        System.out.println("Circunference of circle 2 is " + c2.circunference());
        System.out.println("Diameter of cirlce 1 is " + c1.diameter());
        System.out.println("Diameter of cirlce 2 is " + c2.diameter());
        System.out.println();
        
        c1.setRadius(10);
        c2.setRadius(20);
        System.out.println("Radius of circle 1 is " + c1.getRadius());
        System.out.println("Radius of circle 2 is " + c2.getRadius());
        System.out.println();
        
        c1.setRadius(-10);
        c2.setRadius(0);
        System.out.println("Radius of circle 1 is " + c1.getRadius());
        System.out.println("Radius of circle 2 is " + c2.getRadius());
        System.out.println();
        
        c1.setRadius(-5);
        c2.setRadius(0);
        System.out.println("Radius of circle 1 is " + c1.getRadius());
        System.out.println("Radius of circle 2 is " + c2.getRadius());
        System.out.println();
        
        
    }
    
}
