package setinterfaces;
import java.util.*;
public class IteratorandListiterator {
    public static void main(String[] args) {
        List<String>l=new ArrayList<>();
        l.add("hi");
        l.add("hello");
        l.add("bye");
        Iterator<String>it=l.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
        ListIterator<String>lit=l.listIterator();
        while(lit.hasNext()){
            System.out.println(lit.next());
        }

        while(lit.hasPrevious()){
            System.out.println(lit.previous());
        }
        for(String s:l){
            System.out.println(s);
        }
    }
}
