class Parent {
    void display() {
        System.out.println("Base class method called");
    }
}

class Child extends Parent {
    void display() {
        super.display(); // Calling base class method without a base class instance
        System.out.println("Child class method called");
    }
}

public class Main {
    public static void main(String[] args) {
        Child obj = new Child(); 
        obj.display(); // Calls both base and child methods
    }
}
