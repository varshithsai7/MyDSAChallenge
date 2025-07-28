package regex;

import Streams.stringreaderwriter;
import java.util.regex.*;
public class two {
    public static void main(String[] args) {
        String re="Hi";
        String input="Hi all"+"hi how are you";
        String r="Hello";
        Pattern p=Pattern.compile(re);
        Matcher m=p.matcher(input);
        input=m.replaceAll(r);
        System.out.println(input);
    }
}
