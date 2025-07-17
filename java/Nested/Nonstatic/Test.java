// local inner class is created inside in a method
// A local inner class in Java is a class defined within a method of an outer class.
// It is not accessible outside the method where it is defined.
// Local inner classes can access final or effectively final variables from the enclosing method,
// as well as all members (including private) of the outer class.
// They are useful for logically grouping classes that are only used in one place.
package Nested.Nonstatic;
class person{
    String name;
    int age;
    static int roll = 0;
    person(String name, int age){
        this.name = name;
        this.age = age;
    }
    void display(){
        class student{
            int rollno;
            student(int rollno){
                this.rollno = rollno;
            }
            void show(){
                System.out.println("Name :"+ name + " Age :" + age + " Roll No :" + rollno);
            }
        }
        student s=new student(++roll);
        s.show();
        System.out.println("outer class");
    }
}

class Test{
    public static void main(String[] args) {
        person p=new person("varsh", 20);
        p.display();
        System.out.println("main method");
        person p1 = new person("John", 22);
        p1.display();
        System.out.println("main method");
        // The output will be:
        // Name :varsh Age :20 Roll No :1
        // Name :John Age :22 Roll No :1
    }
}