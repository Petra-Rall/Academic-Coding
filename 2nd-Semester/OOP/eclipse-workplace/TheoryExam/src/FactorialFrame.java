import java.awt.*;
import javax.swing.*;

public class FactorialFrame extends JFrame{
	private JTextField inputfield;
	private JTextField outputfield;
	private JButton button;
	
	FactorialFrame(){
		this.setSize(400,150);
		this.setTitle("Factorial");
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		//this.setResizable(false);
		this.setLayout(new FlowLayout());
		this.setVisible(true);
		
		JLabel inputLabel = new JLabel("Enter Integer: ");
		inputfield = new JTextField(20);
		
		JLabel outputLabel = new JLabel("Factorial:");
		outputfield = new JTextField(20);
		outputfield.setEditable(false);
		
		button = new JButton("Calculate");
		button.addActionListener(e->factorial());
		
		this.add(inputLabel);
		this.add(inputfield);
		this.add(button);
		this.add(outputLabel);
		this.add(outputfield);	
	}
	private void factorial(){
		int x = Integer.parseInt(inputfield.getText());
		int f = 1;
		
		if(x>=2) {
			for(int i=2; i<=x; i++) {
				f *= i; 
			}
			outputfield.setText(String.valueOf(f));
		}
		else {
			outputfield.setText("Enter a Nonnegative Integer!");
		}
	}
	public static void main(String[] args){
		EventQueue.invokeLater(()->{
			new FactorialFrame();
		});
	}		
}