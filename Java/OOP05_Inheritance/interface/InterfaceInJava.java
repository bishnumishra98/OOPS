// What is interface ?
// An interface in Java is a blueprint for a class. Interfaces provide a way to achieve abstraction and support multiple inheritance.
// They define methods that must be implemented by any class that implements the interface.

interface Animal {
    void sound();   // Abstract method: is a method that is declared without an implementation. The implementation
                   // of an abstract method is provided by subclasses or implementing classes.
}

class Dog implements Animal {
    public void sound() {
        System.out.println("Woof");
    }
}

class Cat implements Animal {
    public void sound() {
        System.out.println("Meow");
    }
}

public class InterfaceInJava {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        Animal myCat = new Cat();
        
        myDog.sound();   // O/p: Woof
        myCat.sound();   // O/p: Meow
    }
}
