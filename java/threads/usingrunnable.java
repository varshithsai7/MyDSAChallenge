package threads;
class test1 implements Runnable{
    public void run(){
        System.out.println("In run");
    }
}

public class usingrunnable{
    public static void main(String[] args) {
        test1 t=new test1();
        Thread t1=new Thread(t);
        t1.start();
    }
}