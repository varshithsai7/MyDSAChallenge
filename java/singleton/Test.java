package singleton;
class box{
    private static box b=new box();
    int a=1;
    public static box getInstance(){
        return b;
    }
}
class Test {
    public static void main(String[] args) {
        box k=box.getInstance();
        System.out.println(k.a);
        k.a++;
        box k1=box.getInstance();
        System.out.println(k1.a);
    }
}
