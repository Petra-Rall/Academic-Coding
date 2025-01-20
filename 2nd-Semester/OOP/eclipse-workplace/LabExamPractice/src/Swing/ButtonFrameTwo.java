package Swing;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class ButtonFrameTwo extends JFrame{
 private JPanel buttonPanel;
 private static final int DEFAULT_WIDTH = 600;
 private static final int DEFAULT_HEIGHT = 500;
 
 public ButtonFrameTwo(){
  
  setSize(DEFAULT_WIDTH,DEFAULT_HEIGHT);
  setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  setVisible(true);
  
  buttonPanel = new JPanel();
  add(buttonPanel);
  
  makeButton("Pink", Color.PINK);
  makeButton("Cyan", Color.CYAN);
  makeButton("Yellow", Color.YELLOW);
  
 }
 
 public void makeButton(String name, Color backgroundColor) {
  var button = new JButton(name);
  buttonPanel.add(button);
  button.setFocusable(false);
  button.addActionListener(event -> buttonPanel.setBackground(backgroundColor));
  //because ActionListener is a interface which has only one abstracr method(ActionPerformed), thus the lamda expression
 }
 
 public static void main(String[] args) {
  EventQueue.invokeLater(() -> {
   new ButtonFrameTwo();   
  });
 }
}
