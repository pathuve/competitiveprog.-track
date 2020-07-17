import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.Shape;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.awt.geom.RoundRectangle2D;
import java.util.Scanner;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class test extends JFrame {

	private static final long serialVersionUID = 1L;

	public test(int choice) {

		setSize(new Dimension(320, 320));
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);

		JPanel p = new JPanel() {
			@Override
			public void paintComponent(Graphics g) {
				Graphics2D g2 = (Graphics2D) g;
				Shape line = new Line2D.Double(3, 3, 303, 303);
				Shape rect = new Rectangle(3, 3, 303, 303);
				Shape circle = new Ellipse2D.Double(100, 100, 100, 100);
                Shape roundRect = new RoundRectangle2D.Double(20, 20, 250, 250, 5, 25);
                if(choice == 1)
                {
                    g2.draw(line);

                }
                else if(choice == 2)
                {
                    g2.draw(rect);
                }
                else if(choice == 3)
                {
                    g2.draw(circle);

                }
                else if(choice == 4)
                {
                    g2.draw(roundRect);
                }
                else if(choice == 5)
                {
                    g2.drawArc(140, 20, 100, 100, 360, 180);
                }
			}
		};
		setTitle("My Shapes");
		this.getContentPane().add(p);
	}

	public static void main(String arg[]) {

		SwingUtilities.invokeLater(new Runnable() {

			@Override
			public void run() {
                System.out.println("Please Enter Your Choice");
                System.out.println("1. Line");
                System.out.println("2. Rectangle");
                System.out.println("3. Circle");
                System.out.println("4. Round Rectangle");
                System.out.println("5. Arc");
                Scanner scan = new Scanner(System.in);
                int input = scan.nextInt();
                new test(input);
			}
		});
	}

}
