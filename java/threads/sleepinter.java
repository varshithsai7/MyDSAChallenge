package threads;

import java.lang.reflect.Executable;

/**
 * The sleepinter class demonstrates the use of threads and the Runnable interface in Java.
 * Each instance of sleepinter represents a thread that prints its name and a counter from 0 to 9,
 * pausing for 1 second between each print.
 *
 * In the main method, two sleepinter threads ("one" and "two") are started concurrently.
 * The order in which "one" and "two" print their output may vary between executions.
 * This is because thread scheduling is managed by the JVM and the underlying operating system,
 * which does not guarantee the order of execution between threads.
 * As a result, sometimes "two" may print before "one", and vice versa.
 */
public class sleepinter implements Runnable{
    String name;
    sleepinter(String n){
        this.name=n;
    }
    public void run(){
        for(int i=0;i<10;i++){
            try{
                Thread.sleep(1000);
            }catch(Exception e){
                System.out.println(e.getMessage());
            }
            System.out.println(name + " " +i);
        }
    }
    public static void main(String[] args) {
        sleepinter s1=new sleepinter("one");
        sleepinter s2=new sleepinter("two");
        Thread t1=new Thread(s1);
        Thread t2=new Thread(s2);
        t1.start();
        try{
            t1.join();
        }
        catch(Exception e){
            e.toString();
        }
        t2.start();
    }
}
