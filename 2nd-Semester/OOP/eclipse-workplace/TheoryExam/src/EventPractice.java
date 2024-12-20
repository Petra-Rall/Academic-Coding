import java.awt.*;
import javax.swing.*;;




public class EventPractice {
	
	public static void main(String[] args){
		
		EventQueue.invokeLater(()-> {
			var frame = new SampleFrame();
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			frame.setVisible(true);
			frame.setResizable(false);
			frame.setLocation(600,200);
			frame.setTitle("Event");
		});
	}	
}


class SampleFrame extends JFrame{
	private static final int DEFAULT_WIDTH= 300;
	private static final int DEFAULT_HEIGHT = 200;
	
	public SampleFrame() {
		setSize(DEFAULT_WIDTH, DEFAULT_HEIGHT);
		
		add(new SampleComponent());
		pack();
	}
}

class SampleComponent extends JComponent{
	public static final int msg_x = 75;
	public static final int msg_y = 100;
	
	private static final int DEFAULT_WIDTH= 300;
	private static final int DEFAULT_LENGTH = 200;
	
	public void paintComponent(Graphics g) {
		g.drawString("A Sample Program", msg_x, msg_y);
	}
	
	public Dimension getPreferredSize() {
		return new Dimension(DEFAULT_WIDTH, DEFAULT_LENGTH);
	}
}
