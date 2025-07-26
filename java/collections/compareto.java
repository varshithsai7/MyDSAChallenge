package collections;
import java.util.*;

class stu{
    int r;
    String s;
    stu(int k,String n){
        r=k;
        s=n;
    }
}

class sortby implements Comparator<stu>{

    @Override
    public int compare(stu o1, stu o2) {
        // return o1.r-o2.r;
        if(o1.r==o2.r) return 0;
        else if(o1.r>o2.r) return 1;
        else return -1;
    }
}

public class compareto {
    
    public static void main(String[] args) {
        stu a=new stu(1,"s");
        stu b=new stu(4,"j");
        ArrayList<stu>l=new ArrayList<>();
        l.add(b);
        l.add(a);
        Collections.sort(l,new sortby());
        System.out.println(l);
        for(int i=0;i<l.size();i++){
            System.out.println(l.get(i).r+" "+l.get(i).s);
        }
    }
}
