package Nested.Nonstatic;
// Anonymous inner class is a class without a name that is declared and instantiated all in one statement.
// It is commonly used to override methods of a class or interface on the fly, usually for one-time use.
// Syntax: new SuperType() { // class body }
// Useful for event handling, callbacks, or quick customizations without creating a separate named class.
// anonymous inner class is created inside in a method
class person2{
    String name;
    int age;
    static int roll = 0;

    person2(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display(){
        System.out.println("Name :" + name + " Age :" + age + " Roll No :" + ++roll);
    }
}

class anonymousInnerTest{
    public static void main(String[] args) {
        person2 p=new person2("sai", 20);
        p.display();
        System.out.println("main method");
        // Anonymous Inner Class
        // It allows you to create a class and instantiate it at the same time.

        person2 p2=new person2("varsh", 20) {
            @Override
            void display() {
                System.out.println("Anonymous Inner Class: Name :" + name + " Age :" + age + " Roll No :" + ++roll);
            }
        };
        p2.display();
    }
}
