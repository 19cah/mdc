package application;

import java.util.ArrayList;
import javafx.application.Platform;
import javafx.scene.image.ImageView;

public class CarsMovement implements Runnable {
	
	// Store positions
	private static ArrayList<Integer> positions = new ArrayList<Integer>();
	
	// Car to be moved
	ImageView car;
	
	// Car number
	int carNumber;
	
	// A car ImageView and a car number are passed to the constructor 
	CarsMovement (ImageView image, int carNumber) {
		
		car = image;
		this.carNumber = carNumber;
	}
	
	// Override run method
	public void run() {	
		
		// If car is not at the finish line
		while(car.getX() < 545) {
			
			Platform.runLater(new Runnable() {
				
				public void run() {
					
					//Increase x-coordinate by a random number, this determines the speed of the cars
					car.setX(car.getX()+Math.random()*8);  
				}
			});

			try {
				//Pausing thread
				Thread.sleep(60);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		//Add position of the car
		addPos(carNumber);
	}
	
	//Return positions
	public static ArrayList<Integer> getPositions() {
		return positions;
	}
	
	//Adding position
	synchronized private static void addPos (int number) {
		positions.add(number);
	}
	
	//Reset Positions
	public static void clearPositions() {
		positions.clear();
	}
}