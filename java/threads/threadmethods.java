package threads;

public class threadmethods extends Thread{
    String name;
    threadmethods(String n){
        name=n;
    }
    public void run(){
        System.out.println("Runnnnn");
        int count = 0, num = 2;
        while (count < 5) {
            boolean isPrime = true;
            for (int i = 2; i <= Math.sqrt(num); i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                System.out.println(name + " " +num);
                count++;
            }
            num++;
        }
    }
    public static void main(String[] args) {
        threadmethods t1=new threadmethods("one");
        threadmethods t2=new threadmethods("two");
        t1.setName("1");
        t2.setName("2");
        t1.setPriority(2);
        t2.setPriority(4);
        System.out.println("Thread 1 name "+t1.getName());
        System.out.println("Thread 2 name "+t2.getName());
        System.out.println("Thread 1 priority " + t1.getPriority());
        System.out.println("Thread 2 priority " + t2.getPriority());

        System.out.println("Thread 1 state before start: " + t1.getState());
        System.out.println("Thread 2 state before start: " + t2.getState());

        t1.start();
        t2.start();

        try {
            t1.join();
            t2.join();
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted: " + e.getMessage());
        }

        System.out.println("Thread 1 state after completion: " + t1.getState());
        System.out.println("Thread 2 state after completion: " + t2.getState());
        System.out.println("Is Thread 1 alive? " + t1.isAlive());
        System.out.println("Is Thread 2 alive? " + t2.isAlive());
        System.out.println("Demonstrating sleep method:");
        try {
            System.out.println("Main thread sleeping for 2 seconds...");
            Thread.sleep(2000);
            System.out.println("Main thread woke up!");
        } catch (InterruptedException e) {
            System.out.println("Sleep interrupted: " + e.getMessage());
        }
    }
}
