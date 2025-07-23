package io_bytestreams;
import java.io.*;
public class bytearray {
    public static void main(String[] args) throws IOException {
        String s="varshith";
        byte b[]=s.getBytes();
        ByteArrayInputStream barr=new ByteArrayInputStream(b);
        byte c[]=new byte[25];
        barr.read(c);
        for(byte i:c){
            System.out.print((char)i);
        }
        FileOutputStream fis=new FileOutputStream("java\\io_bytestreams\\two.txt");
        ByteArrayOutputStream bout=new ByteArrayOutputStream();
        bout.write("getplacedsoon".getBytes());
        bout.writeTo(fis);
        bout.flush();
        bout.close();
        fis.close();
        
    }
}
