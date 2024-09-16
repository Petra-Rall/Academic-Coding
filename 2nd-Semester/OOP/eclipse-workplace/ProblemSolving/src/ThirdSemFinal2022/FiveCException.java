package ThirdSemFinal2022;

class LowBatteryException extends Exception{
	LowBatteryException(int chargeAmount){
		super("Batter low!Should be above 20.\nCharge value: "+chargeAmount);
	}
}
public class FiveCException {

	public static void main(String[] args) {
		try {
			throw new LowBatteryException(16);
		}
		catch(LowBatteryException e) {
			System.out.println(e.getMessage());
		}

	}

}
