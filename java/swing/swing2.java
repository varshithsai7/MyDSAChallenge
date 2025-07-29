package swing;

import javax.swing.*;

import java.awt.*;
class Jtest1 extends JFrame{
    Jtest1(){
        setLayout(new FlowLayout());
        JLabel l=new JLabel("Hello world");
        add(l);
        setSize(200,200);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setResizable(false);
        setAlwaysOnTop(true);
    }
}

public class swing2 {
    public static void main(String[] args) {
        Jtest1 t=new Jtest1();
        t.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        t.setAlwaysOnTop(true);
        t.setResizable(false);
        t.setVisible(true); 
        t.setSize(200,200);

    }
}
