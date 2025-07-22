package Files;
import java.io.*;
public class methos {
    public static void main(String[] args) throws Exception{
        File f=new File("java\\Files\\two");
        if(!f.exists()){
            f.createNewFile();
        }
        System.out.println(f.getAbsolutePath());
        System.out.println(f.getName());
        System.out.println(f.getParentFile());
        System.out.println(f.canRead());
        System.out.println(f.canWrite());
        System.out.println(f.canExecute());
    }
}
