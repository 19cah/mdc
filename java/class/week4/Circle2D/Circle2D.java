package circle2d;

/*   author: @19cah
 *   Carlos Abraham, www.19cah.com
 */

public class Circle2D {

  private double x, y;
  private double radius;

    public Circle2D() {
         x = 0;
         y = 0;
        radius = 1;
    }

    public Circle2D(double x, double y, double radius) {
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double getRadius() {
        return radius;
    }

    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }
    //Get Area of the Circle
    public double getArea(){
        return Math.PI * Math.pow(radius, 2);
    }
    
    //Get the Perimeter of the circle
    public double getPerimeter(){
        return 2*Math.PI*radius;
    }
   
    //Check if a point p(x,y) is inside the circle
    public boolean contains(double x, double y){
        return (getX()+getRadius()) > x && (getY()+getRadius()> y);
    }
    
    //Get Distance from the center of two circles FORMULA: √(X₂-X₁)²+(Y₂-Y₁)²
    public double distance(Circle2D circle){
        return (Math.sqrt((Math.pow(getX() - circle.getX(), 2)) + (Math.pow(getY() - circle.getY(), 2))));
    }
    
    //Check if a circle is inside another circle 
    public boolean contains(Circle2D circle){
        return distance(circle) + circle.getRadius() <  getRadius();
    }
    
    //Check if a circle overlaps another circle
    public boolean overlap(Circle2D circle){
       
        if(!circle.contains(circle)){
           if(distance(circle) >  circle.getRadius() + getRadius()){
               return false;
           }
       }
        return true;
    }
}
