package process;

public class demo {
    @SuppressWarnings("deprecation")
    public static void main(String[] args) {
        try{
            Process r=Runtime.getRuntime().exec("notepad.exe");
            r.waitFor();
            System.out.println(r.isAlive());
            System.out.println(r.exitValue());
            r.destroy();
        }
        catch(Exception e){
            e.printStackTrace();
        }
        
    }
}
