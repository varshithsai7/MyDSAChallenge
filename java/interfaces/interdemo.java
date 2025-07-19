interface one{
    int a=9;
    default void display1(){
        System.out.println("1");
    }
    int calc();
}

interface two{
    int b=4;
    default void display2(){
        System.out.println("2");
    }
    int calc1();
}

class v implements one,two{
    public int calc(){
        return (a*a);
    }
    public int calc1(){
        return (b*b);
    }
    
}

public class interdemo extends v{

    public static void main(String[] args) {
        v an=new v();
        an.display1();
        an.display2();
        System.out.println("Square of "+ a + "=" + an.calc());
        System.out.println("Square of "+ b + "=" + an.calc1());
        one ddp=new v();//dynamic dispatch upcasting 
        ddp.display1();
        System.out.println(ddp.getClass());
        two dpp=new interdemo();//dynamic dispatch
        dpp.display2();
    }
}