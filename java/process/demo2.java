package process;

public class demo2 {
    public static void main(String[] args) {
        Runtime r=Runtime.getRuntime();
        System.out.println(r.freeMemory());
        System.out.println(r.totalMemory());
        System.out.println(r.availableProcessors());
        System.out.println(r.maxMemory());
    }
}
