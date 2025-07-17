package abstracts;
abstract class area{
    void commonmethod(){
        System.out.println("this is abstract class used for area calculation");
    }
    abstract void calculateArea();
    // abstract method without body
    // it is mandatory to override this method in the child class
    // if we don't override this method in the child class then we will get compile time error
    // abstract class can have non-abstract methods
    // abstract class can have constructors
    // abstract class can have instance variables
    // abstract class can have static methods
    static int length=10;
    area(){
        System.out.println("this is constructor of abstract class");
        System.out.println("length is : " + length);
        System.out.println("area:"+length * length);
    }
}

class square extends area{
    void calculateArea(){
        System.out.println("Area of square is : " + (++length * ++length));
    }
}

class circle extends area{
    void calculateArea(){
        System.out.println("Area of circle is : " + (3.14 * ++length * ++length));
    }
}

class rectangle extends area{
    int breadth ;
    rectangle(int breadth){
        this.breadth = breadth;
    }
    void calculateArea(){
        System.out.println("Area of rectangle is : " + (++length * breadth));
    }
}


public class sample1 {
	public static void main(String[] args) {
        area a = new square();
        a.commonmethod();
        a.calculateArea();
        System.out.println("main method");
        circle b = new circle();
        b.commonmethod();
        b.calculateArea();
        System.out.println("main method");
        area c = new rectangle(5);
        c.commonmethod();
        c.calculateArea();
        System.out.println("main method");
    }
}
