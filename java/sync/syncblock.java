package sync;
class car {
    String name;
    car(String a){
        this.name=a;
    }
    public void prun(){
        // Each thread synchronizes only on its own instance ('this'), so both threads can run concurrently.
        // The output order depends on thread scheduling by the JVM.
        // It's possible for one thread to print once, then the other prints all its lines, then the first thread resumes.
        // That's why you see one "baleno", then five "fortuner", then four "baleno".
        synchronized(this){
            for(int i=0;i<5;i++){
                System.out.println(name);
            }
        }
    }
}


public class syncblock {
    public static void main(String[] args) {
        car baleno =new car("baleno");
        car fortuner=new car("fortuner");
        baleno.prun();
        fortuner.prun();
    }
}
