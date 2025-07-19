package sync;

public class threadsync extends Thread{
    public synchronized void run(){
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
        }
    }
    public static void main(String[] args) {
        threadsync t1=new threadsync();
        threadsync t2=new threadsync();
        t1.start();
        t2.start();

    }
}

