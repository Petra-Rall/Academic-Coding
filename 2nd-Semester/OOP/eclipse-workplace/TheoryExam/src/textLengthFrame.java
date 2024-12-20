import java.awt.*;
import javax.swing.*;

public class textLengthFrame extends JFrame {

    private JTextField inputField;
    private JTextField outputField;
    private JButton calculateButton;

    public textLengthFrame() {
        // Set up the frame
        this.setLayout(new FlowLayout());
        this.setTitle("String Length Calculator");
        this.setSize(400, 150);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
     // Make the frame visible
        this.setVisible(true);

        // Input field
        JLabel inputLabel = new JLabel("Enter String: ");
        inputField = new JTextField(20);

        // Output field
        JLabel outputLabel = new JLabel("Length: ");
        outputField = new JTextField(10);
        outputField.setEditable(false);

        // Button
        calculateButton = new JButton("Calculate");
        calculateButton.addActionListener(e -> calculateLength());

        // Add components to the frame
        this.add(inputLabel);
        this.add(inputField);
        this.add(calculateButton);
        this.add(outputLabel);
        this.add(outputField);

        
    }

    private void calculateLength() {
        String inputText = inputField.getText();
        int length = inputText.length();
        outputField.setText(String.valueOf(length));
    }

    public static void main(String[] args) {
        EventQueue.invokeLater(()->{
        	new textLengthFrame();
        });
    }
}
