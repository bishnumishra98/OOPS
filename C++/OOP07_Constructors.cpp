// A constructor is a special member function of a class that is automatically called each time 
// an object of the class is created. The purpose of a constructor is to initialize the
// object's data members and set up the object's initial state.

// Properties of constructors are:
// 1) Constructor is an instance member function of class. It can never be static.
// 2) The name of constructor must be the same as the class name.
// 3) It has no return type.
// 4) Constructors must be placed in public section of class. In special cases, constructors can
//    be kept in private section of class about which we will learn later.
// 5) If we do not specify a constructor, C++ compiler generates a default constructor for object
//    which expects no parameter and has an empty body. A default constructor initializes
//    instance variables with garbage values.


// Q) If compiler generates a default constructor automatically for each object, why the
//    programmer should explicitly define constructors in class ?

// A) While the C++ compiler does generate a default constructor automatically if none is defined,
//    there are several reasons why a programmer might choose to explicitly define constructors:

//    1) Initialization with Specific Values:
//       When a programmer defines a constructor, they can provide specific initial values for the
//       object's member variables. This allows for controlled and meaningful initialization.

//    2) Custom Initialization Logic:
//       Constructors allow the programmer to include custom logic for initializing the object,
//       especially if the initialization process is more complex than simple assignments.

//    3) Initialization of Dynamic Resources:
//       If a class manages dynamic resources (memory, file handles, network connections, etc.),
//       a custom constructor allows for the allocation and proper initialization of those resources.

//    4) Overloading Constructors:
//       Overloading constructors allows a class to have multiple ways of being instantiated,
//       providing flexibility to the programmer when creating objects.


#include <iostream>
using namespace std;

class StudentsOfClass12 {
    private:
        int standard;
        int age;
        float weight;

    public:
    // Note: constructor is also called ctor.
        // non-parameterized constructor: initializes the object with default values.
        StudentsOfClass12() {
            standard = 12;
            age = 18;
            weight = 60;
        }
        // Note: if the programmer does not explicitly define any constructor in the class, the C++ compiler
        // generates a default constructor which looks the same as above, but with an empty body.
        // In this case, the instance variables will be automatically initialized by garbage values, which
        // means the values they hold depend on whatever data happened to be in that memory location before,
        // i.e. standard, age and weight would contain garbage values.

        // parameterized constructor: initializes the object with specified values.
        StudentsOfClass12(int age, float w) {
            standard = 12;
            this->age = age;
            weight = w;
        }

        void showStudentInfo() {
            cout << "Standard: " << standard << "\n"
                 << "Age: " << age << "\n"
                 << "Weight: " << weight << "\n\n";
        }
};

// int main() {
//     // allocating objects in stack
//     StudentsOfClass12 s1;   // even if we don't pass values for this object, it will be initialized with an
//     // initial state of {12, 18, 60}. That's one of the big advantages of defining a constructor in class.
//     StudentsOfClass12 s2(18, 55);
//     StudentsOfClass12 s3(17, 65);

//     s1.showStudentInfo();
//     s2.showStudentInfo();
//     s3.showStudentInfo();

//     return 0;
// }

int main() {
    // allocating objects in heap
    // Analogy: int *temp = new int;
    StudentsOfClass12 *s1 = new StudentsOfClass12;

    // Analogy: int *temp = new int(5);
    StudentsOfClass12 *s2 = new StudentsOfClass12(18, 55);
    StudentsOfClass12 *s3 = new StudentsOfClass12(18, 65);

    // s1, s2, s3 are pointers to the each object made on heap. However, pointers are made on stack. So to
    // access the members or methods of the objects through the pointer, we need to use the arrow operator(->).
    s1->showStudentInfo();
    s2->showStudentInfo();
    // To use the dot operator(.), we need to dereference the pointer.
    (*s3).showStudentInfo();

    // dealloacting objects from heap memory.
    // We cannot delete all objects in 1 line like this: 'delete s1, s2, s3;'. Delete them individually.
    delete s1;
    delete s2;
    delete s3;

    return 0;
}
