import java.util.Scanner;


public class playersApplication {
	public static void main(String[] args) {
		Scanner myInput = new Scanner(System.in);
		
		System.out.println("Chose a number to select position: ");
		System.out.println("Batsman(1)  Bowler(2)  Wicketkeeper(3)");
		
		int position = myInput.nextInt();
		
		if(position == 1) {
			double age, batingAverage, catchingReliability;
			age = myInput.nextDouble();
			batingAverage = myInput.nextDouble();
			catchingReliability = myInput.nextDouble();
			playersApplication p = new playersApplication();
			Batsman b = p.new Batsman(age, batingAverage, catchingReliability);
			b.check();
		}
		
		myInput.close();
	}
	
	private class Batsman{
		private double x, y, z;
		
		Batsman(double age, double batingAverage, double catchingReliability){
			this.x = age;
			this.y = batingAverage;
			this.z = catchingReliability;
		}
		void check(){
			if((x < 25 || x > 40) || (y < 40) || (z < 70)) {
				System.out.println("Not eligible");
			}
			else {
				System.out.println("Eligible");
			}
		}
	}
}
