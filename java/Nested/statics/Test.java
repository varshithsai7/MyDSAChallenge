package Nested.statics;

class Person {
    String name;
    int age;
    static int roll = 0;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    static class student{
        static int rollno = 0;
        student(){
            rollno = ++roll;
        }
        void show() {
            System.out.println(" Roll No :" + rollno);
        }
        void showDetails(String name, int age) {
            System.out.println("Name :" + name + " Age :" + age + " Roll No :" + rollno);
        }
    }
}

public class Test {
    public static void main(String[] args) {
        Person.student s1 = new Person.student();
        s1.show();
        Person p1 = new Person("John", 22);
        Person.student s2 = new Person.student();
        s2.show();
        s2.showDetails(p1.name, p1.age);
        // static nested class can access static members of outer class
        // only we are passing name and age to showDetails method that why we got output 
        // else we would have got error as static nested class cannot access non-static members of outer class
    }
}
