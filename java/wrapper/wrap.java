package wrapper;
import java.io.*;
public class wrap {
    public static void main(String[] args) throws Exception{
        int a=10;
        Integer b=a;
        @SuppressWarnings("removal")
        Integer c=new Integer("123");
        Integer d=Integer.valueOf(a);
        b++;
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);

        Integer x=25;
        int y=x;
        int z=x.intValue();
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
    }
}
