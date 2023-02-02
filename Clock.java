
// Clock program
// No tested enough, could have some issues

import java.util.Scanner; // Import the Scanner class for user input

// Imports need it for sleep() more about in https://www.geeksforgeeks.org/thread-sleep-method-in-java-with-examples/

import java.io.*;
import java.lang.Thread;

public class Clock {

	public static void main(String[] args) {

		try  // try need it for sleep()
		{
			int hour, minute, second, time = 1000;
			String specific = "AM";

			Scanner input = new Scanner(System.in); // Create a Scanner object need it for user input

			System.out.print("Insert the hour -> ");

				hour = input.nextInt(); // Read hour input

			System.out.print("Insert the minute -> ");
				
				minute = input.nextInt(); // Read minute input

			System.out.print("Insert the second -> ");
				
				second = input.nextInt(); // Read second input

			while (true) {
				System.out.print("\033[H\033[2J"); // clean the screen console (Tested in linux)  
    				System.out.flush();
			
				second++;
				
				System.out.println(hour + ":" + minute + ":" + second + " " + specific);
				
				Thread.sleep(time);
				
					if (second == 60) {
						second = 0;
						minute++;
					}
					
					if (minute == 60) {
						minute = 0;
						hour++;
					}
						
					if (hour == 13) {
						hour = 1;
						minute = 0;
						second = 0;
						if (specific == "AM" || specific == "am")
							specific = "PM";
						else if (specific == "PM" || specific == "pm")
							specific = "AM";
					}
			}
					
		}

		catch (Exception e)  // cath need it for sleep()
		{	
			System.out.println(e);		
		}
	}

}


