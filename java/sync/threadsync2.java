package sync;
class table{
    synchronized void print(int n){
        for(int i=1;i<11;i++){
            System.out.println(n + "*" + i + "=" +n*i);
        }
    }
}

class my1 extends Thread{
    table t1;
    my1(table t){
        this.t1=t;
    }
    public void run(){
        t1.print(4);
    }
}
class my2 extends Thread {
    table t2;
    my2(table t) {
        this.t2 = t;
    }
    public void run() {
        int randomNum = (int)(Math.random() * 10) + 1; // random integer between 1 and 10
        t2.print(randomNum);
    }
}

public class threadsync2{
    
    public static void main(String[] args) {
        table obj=new table();
        my1 one=new my1(obj);
        my2 two=new my2(obj);
        one.start();
        two.start();
    }
}
