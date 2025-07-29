package swing;

import javax.swing.*;

class Jtest extends JFrame{
    Jtest(){
        JLabel l=new JLabel("Hello world");
        add(l);
        setSize(200,200);
        setVisible(true);
    }
}

public class swing1 {
    public static void main(String[] args) {
        Jtest t=new Jtest();
        t.setAlwaysOnTop(true);
    }
}
