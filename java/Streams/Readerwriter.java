import java.io.*;
import java.util.Scanner;

public class Readerwriter{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String a=sc.nextLine();
        try {
            FileWriter fw=new FileWriter("one.txt");
            fw.write(a);
            fw.append(" abcdefg");
            fw.flush();
            fw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        char b[]=new char[100];
        try{
            FileReader fr=new FileReader("one.txt");
            int l=fr.read(b);
            System.out.println(l + "is length");
            fr.mark(l);//read ahead of the length
            fr.close();
        }
        catch(IOException e){
            e.toString();
        }

    }
}