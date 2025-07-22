package Files;
import java.io.*;
import java.util.Scanner;
public class read {
    public static void main(String[] args) throws IOException{
        File f=new File("java\\Files\\two\\hello.txt");
        if(!f.exists()){
            f.createNewFile();
        }
        FileWriter fw=new FileWriter(f);
        fw.write("Hiwelcome");
        fw.flush();
        fw.close();
        FileInputStream fis=new FileInputStream(f);
        int i;
        while((i=fis.read())!=-1){
            System.out.println((char)i);
        }
        File f2=new File("java\\Files\\two\\hi.txt");
        if(!f2.exists()) f2.createNewFile();
        FileOutputStream fos=new FileOutputStream(f2);
        String a="varsh";
        byte b[]={67,68,97,89,78,69,68,67,70,71};
        fos.write(b);
        fos.flush();
        fos.close();
        BufferedReader br=new BufferedReader(new FileReader(f2));
        while((i=br.read())!=-1){
            System.out.println((char)i);
        }
        br.close();
        FileOutputStream fos1=new FileOutputStream(f2);
        String s="Varshith";
        for(char ch:s.toCharArray()){
            fos1.write((int)ch);
        }
        fos1.flush();
        fos1.close();

        Scanner sc=new Scanner(f2);
        String k;
        while(sc.hasNextLine()){
            System.out.println(sc.nextLine());
        }
        sc.close();


        BufferedReader br1=new BufferedReader(new FileReader(f));
        String k1;
        while((k1=br1.readLine())!=null){
            System.out.println(k1);
        }
        br1.close();
    }
}
