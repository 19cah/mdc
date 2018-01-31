/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgPoligon;

/**
 *
 * @author carlos.hernandez107
 */
public class TestLoan {
    public static void main(String[] args){
        
        RegularPolygon a1 = new RegularPolygon();
        RegularPolygon a2 = new RegularPolygon(6,4);
        RegularPolygon a3 = new RegularPolygon(10,4,5.6,7.8);
        
        System.out.println("Area: "+ a1.getArea());
        System.out.println("Area: "+ a2.getArea());
        System.out.println("Area: "+ a3.getArea());
    }
}
