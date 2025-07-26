package collections;
import java.io.*;
import java.util.*;



public class lists {
    public static void main(String[] args) {
        List<Integer>a=new ArrayList<>();      
        for(int i=0;i<6;i++){
            a.add(i);
        }  
        Vector<String>s=new Vector<>(8);
        for(int i=65;i<71;i++){
            s.add(""+(char)i+"");
        }
        for(int i=0;i<s.size();i++){
            System.out.println(s.get(i));
        }
        System.out.println(s.firstElement());
        System.out.println(s.lastElement());
        System.out.println(s.remove(0));
        System.out.println(s.remove(0));
        System.out.println(s);


        LinkedList<Integer>in=new LinkedList<>();
        for(int i=0;i<6;i++){
            in.add(i);
        }
        for(int i=0;i<in.size();i++){
            System.out.println(in.get(i));
        }
        System.out.println(in.getFirst());
        System.out.println(in.getLast());
        System.out.println(in.removeFirst());
        System.out.println(in.removeLast());
        System.out.println(in);
        
        Stack<Integer>sta=new Stack<>();
        for(int i=0;i<6;i++){
            sta.add(i);
        }
        System.out.println(sta.isEmpty());
        System.out.println(sta.peek());
        System.out.println(sta.pop());
        System.out.println(sta);

        
    }
}
