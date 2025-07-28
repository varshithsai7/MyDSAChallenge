package datetime;
import java.util.*;
public class sample {
    public static void main(String[] args) {
        Date d=new Date();
        System.out.println(d);
        Date d1=new Date(2025,06,27);
        System.out.println(d1);
        System.out.println(d.before(d1));
        System.out.println(d.after(d1));
        System.out.println(d.compareTo(d1));
        d1.setTime(204587433443L);
        System.out.println(d1);;

    }
}
