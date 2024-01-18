import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class MyFrame extends JFrame {
    public MyFrame() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        addMouseListener(new MyMouseAdapter());
    }

    class MyMouseAdapter extends MouseAdapter {
        public void mouseClicked(MouseEvent e) {
            JOptionPane.showMessageDialog(MyFrame.this, "押したね", "やあ", JOptionPane.INFORMATION_MESSAGE);
        }
    }
}

class SimpleWindow {
    public static void main(String[] args) {
        MyFrame frame = new MyFrame();
        frame.setSize(600, 400);
        frame.setTitle("Hello");
        frame.setVisible(true);
    }
}
