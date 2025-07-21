import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.Reader;
import java.util.Scanner;

public class Buffered {
    public static void main(String[] args) throws IOException{
        Scanner s=new Scanner(System.in);
        char arr[]=new char[25];
        FileWriter fw=new FileWriter("two.txt");
        BufferedWriter bw=new BufferedWriter(fw,40);
        bw.write("hi hello namste");
        bw.flush();
        bw.close();

        try{
            Reader fr=new FileReader("two.txt");
            
            BufferedReader br=new BufferedReader(fr);
            System.out.println(br.readLine());
            
            
            br.read(arr);
            System.out.println(arr.toString()); 
            // readline takes cursor to end so no more read possible
            br.close();
            
        }
        catch(IOException e){
            e.getMessage();
        }
    }
}
