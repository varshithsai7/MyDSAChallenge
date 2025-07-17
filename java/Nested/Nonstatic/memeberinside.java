package Nested.Nonstatic;


// Member Inner Class:
// A member inner class is a non-static class defined within another class.
// It has access to all members (including private) of the outer class.
// To instantiate a member inner class, you need an instance of the outer class.
// Syntax: OuterClass.InnerClass innerObj = outerObj.new InnerClass();
// Member inner classes are commonly used for logically grouping classes that will only be used in one place.
class vehicle{
    String name;
    int speed;
    vehicle(String name, int speed) {
        this.name = name;
        this.speed = speed;
    }
    void showDetails() {
        System.out.println("Vehicle Name: " + name + ", Speed: " + speed);
    }
    // Member Inner Class
    class engine{
        String type;
        engine(String type) {
            this.type = type;
        }
        void showEngineDetails() {
            System.out.println("Engine Type: " + type + ", Vehicle Name: " + name + ", Speed: " + speed);
        }
    }
}

public class memeberinside {
    public static void main(String[] args) {
        vehicle v=new vehicle("Baleno", 220);
        v.showDetails();
        vehicle.engine e = v.new engine("Diesel");
        e.showEngineDetails();
        // Output:
        // Vehicle Name: Baleno, Speed: 220
        // Engine Type: Diesel, Vehicle Name: Baleno, Speed: 220
        // Member Inner Class can access all members of the outer class, including non-static members.
        // It is associated with an instance of the outer class.
    }
    
}
