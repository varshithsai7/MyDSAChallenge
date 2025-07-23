package io_bytestreams;

import java.io.*;

public class buffered {
    public static void main(String[] args) throws IOException{
        BufferedOutputStream bos=new BufferedOutputStream(new FileOutputStream("java\\io_bytestreams\\two.txt"));
        byte b[]="PhineousAndFerb".getBytes();
        bos.write(b);
        bos.flush();
        bos.close();

        BufferedInputStream bis=new BufferedInputStream(new FileInputStream("java\\io_bytestreams\\two.txt"));
        byte c[]=new byte[9];
        bis.read(c);
        bis.available();
        for(int k=0;k<c.length;k++){

            System.out.println((char)c[k]);
        }
        int i;
        while ((i=bis.read())!=-1) {
            System.out.println((char)i);
        }
        bis.close();
    }
}
