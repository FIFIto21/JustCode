

import java.util.*;

public class Ball {

	static int RandomNumber(int min, int max) {
		return (int) ((Math.random() * (max -min)) + min);	
	}

	static void BallMoment(int n) {
		switch (n) {
			case 1:
				System.out.println("\n Yes\n");
				break;
			case 2:
				System.out.println("\n No\n");
				break;
			case 3:
				System.out.println("\n Sure\n");
				break;
			case 4:
				System.out.println("\n Of corse not\n");
				break;
			case 5:
				System.out.println("\n Maybe\n");
				break;
			default:
				System.out.println("\tError - inside BallMoment function switch default\n");
		}
	}

	public static void main(String[] args) {
		
		System.out.println("\n\t** 8 BALL **\n");
		
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();

		BallMoment(RandomNumber(1,5));
	}
}
