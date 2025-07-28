package stringtoken;


import java.util.StringTokenizer;

public class sample {
    public static void main(String[] args) throws Exception{
        StringTokenizer st=new StringTokenizer("Hello my name is jarvis");
        StringTokenizer st2=new StringTokenizer("One two three","e");
        StringTokenizer st3=new StringTokenizer("One two three","t",true);
        while(st.hasMoreTokens()){
            System.out.println(st.nextToken());
        }
        System.out.println(st2.countTokens());
        while(st2.hasMoreElements()){
            System.out.println(st2.nextElement());
        }
        System.out.println(st3.countTokens());
        while(st3.hasMoreElements()){
            System.out.println(st3.nextToken());
        }
    }
    
}
