package setinterfaces;


import java.util.*;
import java.util.HashSet;
import java.util.Set;

/**
 * Demonstrates the basic usage of a HashSet.
 */
public class SetHash {
    public static void main(String[] args) {
       Set<Integer>S=new HashSet<>();
       Random r=new Random();
       for(int i=0;i<10;i++){
        S.add(r.nextInt(100));
        }
        System.out.println(S);  
       Set<Integer>s1=new HashSet<>();
       for(int i=0;i<10;i++){
        s1.add(r.nextInt(100));
        }
        System.out.println(s1);
       Set<Integer>s2=new HashSet<>();
       s2.addAll(S);
       System.out.println(s2);
       s2.retainAll(S);
       System.out.println(s2);
       s2.removeAll(s1);
       System.out.println(s2);
       
       System.out.println(s2.containsAll(S));
       Iterator<Integer>it=s2.iterator();
       while(it.hasNext()){
        System.out.println(it.next());
       }

       for(int i=0;i<5;i++){
        s2.remove(r.nextInt());
       }
       System.out.println(s2);

    }
}
