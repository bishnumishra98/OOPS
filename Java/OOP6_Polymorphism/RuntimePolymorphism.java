// Runtime Polymorphism (Method Overriding): Runtime polymorphism is achieved through method overriding, where a subclass provides
//                                           a specific implementation of a method that is already defined in its superclass. The
//                                           method to be executed is determined at runtime based on the object's actual class.
class Animal {
    public void makeSound() {
        System.out.println("Some sound...");
    }
}

class Dog extends Animal {
    @Override   // @override is optional. But its a good practice to mention it.
    public void makeSound() {
        System.out.println("Bark");
    }
}

class Cat extends Animal {
    @Override
    public void makeSound() {
        System.out.println("Meow");
    }
}


public class RuntimePolymorphism {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        Animal myCat = new Cat();
        
        myDog.makeSound();  // o/p: Bark
        myCat.makeSound();  // o/p: Meow
    }
}
