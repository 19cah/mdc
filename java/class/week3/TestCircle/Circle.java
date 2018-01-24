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
public class Circle {
 
    private double radius;
    
    Circle(){
        radius = 1;
    }
    
    Circle(double newRadius){
        setRadius(newRadius);
    }
    
    double getArea(){
        return radius * radius * Math.PI;
    }
    
    double circunference(){
        return 2* Math.PI * radius;
    }
    
    double diameter(){
        return 2 * radius;
    }
    
    double getRadius(){
        return radius;
    }
    
    void setRadius(double newRadius){
        radius = (newRadius > 0) ? newRadius : 1;
    }
}


