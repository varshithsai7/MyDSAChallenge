package LambdaandfunInter;

import java.util.*;

@FunctionalInterface
interface My{
    int square(int k);
}


@FunctionalInterface
interface str{
    String reverse(String n);
}

public class sample1 {
    public static void main(String[] args) {
        Random r=new Random();
        int k=r.nextInt(5);
        My m;
        m=(val)->val*val;

        System.out.println(m.square(k));

        String s="Gemini";
        str st;
        st=(val)->{
            StringBuilder n=new StringBuilder();
            for(int i=val.length()-1;i>-1;i--){
                n.append(val.charAt(i));
            }
            return n.toString();
        };
        System.out.println(st.reverse(s));
    }
}
