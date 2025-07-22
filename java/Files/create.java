package Files;

import java.io.File;
import java.io.IOException;

public class create {
    public static void main(String[] args) throws IOException {
        File f=new File("java\\Files\\one.txt");
        if(!f.exists()){
            f.createNewFile();
        }
        File f2=new File("java\\Files","two");
        if(!f2.exists()){
            f2.mkdir();
        }
        File f3=new File(f2, "hello.txt");
        if(!f3.exists()){
            f3.createNewFile();
        } 
    }
}
