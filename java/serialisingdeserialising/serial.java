package serialisingdeserialising;
import java.io.*;
class student implements Serializable{
    int i;
    String name;
    student(int k,String s){
        i=k;
        name=s;
    }

}
public class serial {
    public static void main(String[] args) throws IOException {
        student s=new student(47,"sai");
        FileOutputStream fis=new FileOutputStream("java\\serialisingdeserialising\\f1.txt");
        ObjectOutputStream os=new ObjectOutputStream(fis);
        os.writeObject(s);
        os.close();
        System.out.println("success");
    }
}
