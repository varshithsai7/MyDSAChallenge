package io_bytestreams;
import java.io.*;
public class fileinput {
    
    public static void main(String[] args) throws IOException{
        File f=new File("java\\io_bytestreams\\one.txt");
        if(!f.exists()){
            f.createNewFile();
        }
        FileOutputStream fos=new FileOutputStream(f);
        byte b[]="hi welcome".getBytes();
        fos.write(b);
        fos.flush();
        FileInputStream fis=new FileInputStream(f);
        int i=fis.read();
        while(i!=-1){
            System.out.println((char)i);
            i=fis.read();
        }
        fis.close();
        fos.close();
    }
}
