package process;

import java.io.IOException;

public class demo3 {
    public static void main(String[] args) throws IOException {
        ProcessBuilder p=new ProcessBuilder("notepad.exe");
        p.start();
    }
}
