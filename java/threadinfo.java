public class threadinfo implements Runnable{
    public void run(){
        Thread t1=Thread.currentThread();
        System.out.println(t1);
    }
    public static void main(String[] args) {
        threadinfo td=new threadinfo();
        Thread t=new Thread(td);
        t.start();
        Thread t1=Thread.currentThread();
        System.out.println(t1);
    }
}
