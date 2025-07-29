package swing;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
class Addition extends JFrame{
    JTextField t1,t2,t3;
    JButton b;
    JLabel l;

    Addition(){
        t1=new JTextField(10);
        t2=new JTextField(10);
        t3=new JTextField(10);
        b=new JButton("OK");
        l=new JLabel("Result");
        add(t1);
        add(t2);
        add(t3);
        add(b);
        add(l);
        setLayout(new FlowLayout());
        setSize(200,200);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setResizable(false);
        setAlwaysOnTop(true);
    }
    public void actionPerformed(ActionEvent e){
        int a=Integer.parseInt(t1.getText());
        int b=Integer.parseInt(t2.getText());
        int c=a+b;
        t3.setText(String.valueOf(c));
    }
}

public class three {
    public static void main(String[] args) {
        Addition a=new Addition();
    }
}
