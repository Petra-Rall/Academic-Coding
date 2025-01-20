package CLabFinal;

public class ThreeValidate {
	int validate(String str) {
		String[] words = str.split(" ");
		String uni = words[0];
		String HSCBoard = words[1];
		String SSCBoard = words[4];
		int HSCYear = Integer.parseInt(words[3]);
		int SSCYear = Integer.parseInt(words[6]);
		int diff = HSCYear - SSCYear;
		
		boolean HSCCapital = HSCBoard.matches("[A-Z]+");
		boolean SSCCapital = SSCBoard.matches("[A-Z]+");
		if((uni.equals("CU")) && (HSCCapital == true) && (SSCCapital == true) && (HSCBoard.length() == 3) && (SSCBoard.length() == 3) && (diff >= 2)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	public static void main(String[] args) {
		ThreeValidate obj = new ThreeValidate();
		System.out.println(obj.validate("CU CTG 216754 2018 CTG 206543 2016"));
	}
}