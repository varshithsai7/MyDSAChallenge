package threads;

public class Multithreads implements Runnable {
    String name;
    Multithreads(String a){
        this.name=a;
    }
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println(name + " "+ i);
        }
    }
    public static void main(String[] args) throws Exception {
        Multithreads t1=new Multithreads("Thread1");
        Multithreads t2=new Multithreads("Thread2");
        Thread a=new Thread(t1);
        Thread b=new Thread(t2);
        // // Start both threads
        // a.start();
        // b.start();
        // Print completion message
        System.out.println("Multiple threads completed execution");

        /*
        Example output (order may vary due to thread scheduling):

        Multiple threads completed execution
        Thread1 0
        Thread2 0
        Thread1 1
        Thread2 1
        Thread1 2
        Thread2 2
        ...
        Thread1 9
        Thread2 9

        Note: The actual order of lines from Thread1 and Thread2 may interleave differently each run.
        */

        a.start();
        try{
            a.join();
        }catch(Exception e){

        }
        b.start();

        /*
        Example output (order may vary due to thread scheduling):

        Multiple threads completed execution
        Thread1 0
        Thread1 1
        Thread1 2
        Thread1 3
        Thread1 4
        Thread1 5
        Thread1 6
        Thread1 7
        Thread1 8
        Thread1 9
        Thread2 0
        Thread2 1
        Thread2 2
        Thread2 3
        Thread2 4
        Thread2 5
        Thread2 6
        Thread2 7
        Thread2 8
        Thread2 9

        Note: Thread1 completes before Thread2 starts due to a.join().
        */

        }
}
