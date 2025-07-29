package LambdaandfunInter;

import java.util.ArrayList;
import java.util.List;

interface Example{
    int add(int a,int b);
}

public class sample2 {
    public static void main(String[] args) {
        Example e1=(a,b)->(a+b);
        Example e2=(a,b)->(a-b);
        System.out.println(e1.add(4,5));
        System.out.println(e2.add(5,4));

        List list=new ArrayList<>();
        list.add("ankit");
        list.add("mayank");
        list.forEach(
            (n)->System.out.println(n)
        );

    }
}
