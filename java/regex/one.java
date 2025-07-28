package regex;
import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class one {
    public static void main(String[] args) {
        Pattern p=Pattern.compile("[0,9]?[a-z]+");
        Matcher m=p.matcher("hi hello 123");
        boolean b=m.matches();
        System.out.println(b);
        boolean b2=Pattern.compile(".s").matcher("as").matches();
        System.out.println(b2);
        System.out.println(Pattern.matches("asd","as/d"));
        Matcher m1=Pattern.compile("JAVa",Pattern.CASE_INSENSITIVE).matcher("Java programming");
        while(m1.find()){
            System.out.println(m1.start()+ " "+(m1.end()-1));
        }
        System.out.println(Pattern.matches("[a-zA-Z0-9]{6}","aruN32"));
        System.out.println(Pattern.matches("\\d", "45"));
    }
}
