package datetime;
import java.util.*;
import java.lang.*;
import java.io.*;
public class calenders {
    public static void main(String[] args) {
        Calendar c=Calendar.getInstance();
        System.out.println(c.getTime());
        System.out.println(c.get(Calendar.YEAR));
        System.out.println(c.get(Calendar.MONTH));
        System.out.println(c.get(Calendar.DATE));
        System.out.println(c.get(Calendar.MINUTE));
        System.out.println(c.get(Calendar.SECOND));
        System.out.println(c.get(Calendar.MILLISECOND));

        System.out.println("MAx weeks of month"+c.getMaximum(Calendar.WEEK_OF_MONTH));
        System.out.println("Min weeks of month"+c.getMinimum(Calendar.WEEK_OF_MONTH));

        System.out.println("Max weeks"+c.getMaximum(Calendar.WEEK_OF_YEAR));
        System.out.println("Min weeks"+c.getMinimum(Calendar.WEEK_OF_YEAR));

        System.out.println(c.getMaximum(Calendar.DAY_OF_MONTH));
    }
}
