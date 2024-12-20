import java.awt.*;
import javax.swing.*;

public class palindromeFrame extends JFrame {
	private JTextField inputfield;
	private JTextField outputfield;
	private JLabel inputlabel;
	private JLabel outputlabel;
	private JButton button;
	
	public palindromeFrame() {
		this.setSize(400,150);
		this.setVisible(true);
		this.setTitle("Palindrome");
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setResizable(false);
		this.setLayout(new FlowLayout());
		
		
		inputlabel = new JLabel("String");
		inputfield = new JTextField(25);
		
		outputlabel = new JLabel("It is ");
		outputfield = new JTextField(10);
		
		button = new JButton("Check");
		button.addActionListener(e -> palindrome());
		
		this.add(inputlabel);
		this.add(inputfield);
		this.add(button);
		this.add(outputlabel);
		this.add(outputfield);
		
		
	}
	
	private void palindrome() {
		char c[] = inputfield.getText().toCharArray();
		int len = inputfield.getText().length();
		boolean isPalindrome = true;
		for(int i =0; i<len/2; i++) {
			if(c[i] != c[(len-i-1)]) {
				isPalindrome = false;
				break;	
			}
		}
		outputfield.setText(isPalindrome? "a Palindrome!": "not a Palindrome");
	}
	public static void main(String[] args){
		EventQueue.invokeLater(()->{
			new palindromeFrame();
		});
	}
}
