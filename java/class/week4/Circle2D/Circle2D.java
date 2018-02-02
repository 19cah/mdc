package circle2d;

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
    
    public double getArea(){
        return Math.PI * Math.pow(radius, 2);
    }
    
    public double getPerimeter(){
        return 2*Math.PI*radius;
    }
   
    public boolean contains(double x, double y){
        return (getX()+getRadius()) > x && (getY()+getRadius()> y);
    }
    
    public double distance(Circle2D circle){
        return (Math.sqrt((Math.pow(getX()-circle.getX(),2))+(Math.pow(getY()-circle.getY(),2))));
    }
    public boolean contains(Circle2D circle){
        return distance(circle)+circle.getRadius()< getRadius();
    }
    public boolean overlap(Circle2D circle){
       
        if(!circle.contains(circle)){
           if(distance(circle)> circle.getRadius()+getRadius()){
               return false;
           }
       }
        return true;
        
    }
}
