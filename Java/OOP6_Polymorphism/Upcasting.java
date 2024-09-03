// Dynamic Method Dispatch, also known as Upcasting enables method calls to be resolved at runtime
// based on the actual object type, allowing for flexible and dynamic method invocation.
class Animal {
    public void makeSound() {
        System.out.println("Some sound...");
    }
}

class Dog extends Animal {
    @Override
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


public class Upcasting {
    public static void main(String[] args) {
        Animal myAnimal = new Dog();  // Upcasting
        myAnimal.makeSound();         // Output: Bark

        myAnimal = new Cat();         // Upcasting
        myAnimal.makeSound();         // Output: Meow
    }
}
