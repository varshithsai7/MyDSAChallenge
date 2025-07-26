package serialisingdeserialising;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;

public class deserial {
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        FileInputStream fis=new FileInputStream("java\\serialisingdeserialising\\f1.txt");
        ObjectInputStream os=new ObjectInputStream(fis);
        student v=(student)os.readObject();
        System.out.println(v.i +" "+v.name);
        
    }
}
