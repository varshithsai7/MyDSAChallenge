package LambdaandfunInter;

interface operation{
    int opt(int x,int y);
}

public class sample3 {
    public static void result(int x,int y,operation obj){
        System.out.println(obj.opt(x,y));
    }
    public static void main(String[] args) {
        result(1, 2, (a,b)->a+b);
        result(4,5,(a,b)->a-b);
        result(4,5,(a,b)->a*b);
        result(4,5,(a,b)->a/b);
        result(4,5,(a,b)->a%b);
    }
}
