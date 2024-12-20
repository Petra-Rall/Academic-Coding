import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class YFrame extends JFrame implements ActionListener {
    JButton button;
    JTextField textField;
    JTextArea textArea;

    YFrame() {
        this.setLayout(new FlowLayout());

        button = new JButton("Submit");
        button.setFont(new Font("MV Boli", Font.PLAIN, 20));
        button.setFocusable(false);
        button.addActionListener(this);
        button.setForeground(Color.BLUE);

        textField = new JTextField(20);
        textField.setFont(new Font("MV Boli", Font.PLAIN, 20));

        textArea = new JTextArea(5, 20);
        textArea.setFont(new Font("MV Boli", Font.PLAIN, 20));
        textArea.setEditable(false);

        this.add(textField);
        this.add(button);
        this.add(textArea);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500, 500);
        this.setVisible(true);
    }

    public void changeBackgroundColor() {
        this.getContentPane().setBackground(Color.BLUE);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button) {
            changeBackgroundColor();
            String input = textField.getText();
            char[] chars = input.toCharArray();
            int start = 0, end = input.length() - 1;
            boolean isPalindrome = true;

            while (start < end) {
                if (chars[start] != chars[end]) {
                    isPalindrome = false;
                    break;
                }
                start++;
                end--;
            }
            textArea.setText(isPalindrome ? "Palindrome" : "Not a Palindrome");
        }
    }

    public static void main(String[] args) {
        new YFrame();
    }
}