package Streams;

import java.io.IOException;
import java.io.StringReader;
import java.io.StringWriter;
import java.util.Scanner;

public class stringreaderwriter {
    public static void main(String[] args) throws IOException {
        Scanner sc=new Scanner(System.in);
        String s="i am saivarshith";
        StringReader sr=new StringReader(s);
        char t[]=new char[50];
        sr.read(t);
        System.out.println(new String(t,0,t.length));
        StringWriter sw=new StringWriter();
        sw.write(s);
        StringBuffer sb=sw.getBuffer();
        String a=sw.toString();
        System.out.println(sb);
        System.out.println(a);
    }
}
