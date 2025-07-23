package io_bytestreams;

import java.io.*;

public class filterstreams {
    public static void main(String[] args) throws IOException {
        FileOutputStream f=new FileOutputStream("java\\io_bytestreams\\three.txt");
        DataOutputStream df=new DataOutputStream(f);
        df.writeInt(7);    
        df.writeInt(8);    
        df.writeInt(9);
        df.writeChars("iam very fine");
        df.writeFloat(5.9f);
        df.writeChar(78);    
        df.writeChar('a');
        df.flush();
        df.close();f.close();
        
        FileInputStream f1=new FileInputStream("java\\io_bytestreams\\three.txt");
        DataInputStream df1=new DataInputStream(f1);
        System.out.println("available "+df1.available());
        System.out.println(df1.readInt());
        System.out.println(df1.readInt());
        System.out.println(df1.readInt());
        for(int j=0;j<13;j++){
            System.out.print(df1.readChar());
        }
        System.out.println(df1.readFloat());
        System.out.println(df1.readChar());
        System.out.println(df1.readChar());
        df1.close();
        f1.close();
    }
}
