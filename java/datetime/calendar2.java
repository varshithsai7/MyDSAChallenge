package datetime;

import java.util.Calendar;

public class calendar2 {
    public static void main(String[] args) {
        Calendar c=Calendar.getInstance();
        System.out.println(c.getTime());
        c.add(Calendar.YEAR,23);
        System.out.println(c.getTime());
        c.add(Calendar.MONTH,5);
        System.out.println(c.getTime());
        c.add(Calendar.DATE,5);
        System.out.println(c.getTime());
        c.add(Calendar.HOUR,5);
        System.out.println(c.getTime());
        c.add(Calendar.MINUTE,5);
        System.out.println(c.getTime());

    }
}
