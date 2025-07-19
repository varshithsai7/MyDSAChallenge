package sync;

class x{
    void disp1(x obj2){
        System.out.println("thread 1 waiting for thread2 to release lock");
        synchronized(obj2){
            System.out.println("Dead lock occured");
        }
    }
    void disp2(x obj1){
        System.out.println("thread2 waiting for thread1 to realease lock");
        synchronized(obj1){
            System.out.println("deadlock occured");
        }
    }
}

class th1 extends Thread{
    x obj1,obj2;
    th1(x obj1,x obj2){
        this.obj1=obj1;
        this.obj2=obj2;
    }
    public void run(){
        synchronized(obj1){
            try{
                Thread.sleep(1000);
            }catch(Exception e){
                System.out.println(e.toString());
            }
            obj2.disp2(obj2);
        }
    }
}
class th2 extends Thread{
    x obj1,obj2;
    th2(x obj1,x obj2){
        this.obj1=obj1;
        this.obj2=obj2;
    }
    public void run(){
        synchronized(obj2){
            try{
                Thread.sleep(1000);
            }catch(Exception e){
                System.out.println(e.toString());
            }
            obj1.disp2(obj1);
        }
    }
}

public class Dead {
    public static void main(String[] args) {
        x obj1=new x();
        x obj2=new x();
        th1 t1=new th1(obj1, obj2);
        th2 t2=new th2(obj1, obj2);
        t1.start();
        t2.start();

    }    
}
