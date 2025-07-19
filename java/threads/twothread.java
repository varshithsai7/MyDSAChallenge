package threads;
class Myt extends Thread{
    public void run(){
        System.out.println("thread 1 running");
    }
}

class Myt2 extends Thread{
    public void run(){
        System.out.println("thread 2 is running");
    }
}

public class twothread {
    public static void main(String[] args) {
        Myt t1=new Myt();
        Myt2 t2=new Myt2();
        t1.start();
        t2.start();
    }
}
