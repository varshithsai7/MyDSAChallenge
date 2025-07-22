package Files;
import java.io.*;
import java.io.IOException;
import java.util.Arrays;

public class printdir {
    public static void main(String[] args) throws IOException{
        File f=new File("java\\Files");
        if(!f.exists()){
            f.mkdir();
        }
        System.out.println(Arrays.toString(f.list()));
        System.out.println(Arrays.toString(f.listFiles()));

    }
}
