package obj;
import java.io.*;
public class demo {
    public demo clone() throws CloneNotSupportedException{
        return (demo)super.clone();
    }
    public static void main(String[] args) throws CloneNotSupportedException {
        demo d=new demo();
        System.out.println(d);//calls tostring
        System.out.println(d.hashCode());
        System.out.println(d.getClass());
        demo d1=d;
        System.out.println(d.equals(d1));
        demo d2=new demo();
        System.out.println(d.equals(d2));
        // demo d3=d.clone();
        d.finalize();

    }
    protected void finalize(){
        System.out.println("about to clean");
    }
}
