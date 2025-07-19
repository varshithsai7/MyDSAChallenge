package threads;

class s extends Thread{
    public void run(){
        System.out.println("In run");
    }
}


public class test {
    public static void main(String[] args) {
        s inst = new s();
        inst.start();
    }
}
