/*
  C++ friend Function and friend Classes

  Data hiding restricts the access of private members from outside of the class.
  Protected members can only be accessed by derived classes and are inaccessible from outside.
  Friend functions (friend class) break this rule and allow to access member functions from outside the class.
*/

// Add members of two different classes

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {

    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}

    private:
        int numA;

         // friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

    private:
        int numB;

        // friend function declaration
        friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB) << endl;
    return 0;
}
