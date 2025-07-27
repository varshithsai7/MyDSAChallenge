package setinterfaces;
import java.util.*;

public class Treeset {
    public static void main(String[] args) {
        Set<Integer>s=new TreeSet<>();
        Random r=new Random();
        for(int i=0;i<10;i++){
            s.add(r.nextInt(10));
        }
        System.out.println(s);
        Iterator<Integer>it=s.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
        Set<String>v=new LinkedHashSet<>();
        v.add("hi");
        v.add("hello");
        v.add("bye");
        System.out.println(v);
        Iterator i=v.iterator();
        while(i.hasNext()){
            System.out.println(i.next());
        }

    }

}
