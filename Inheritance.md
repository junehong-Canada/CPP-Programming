# Inheritance

## C++ Inheritance
Inheritance allows us to create a new class(derived class) from an existing class(base class).
__The drived class inherits the features from the base class__ and can have additional features of its owns.
```
#include <iostream>
using namespace std;

// base class
class Animal {
private:
  string color;
protected:
  string type;
public:
  void eat() {
    cout << "I can eat!" << endl;
  }
  void sleep() {
    cout << "I can sleep!" << endl;
  }
  void setColor(string clr) {
    color = clr;
  }
  string getColor() {
    return color;
  }
};

// derived class
class Dog : public Animal {
public:
  // void setColor(string clr) {
  //   // Error: member "Animal::color" is not inaccessible
  //   color = clr;
  // }
  void setType(string tp) {
    type = tp;
  }
  void displayInfo(string c) {
    cout << "I am a " << type << endl;
    cout << "My color is " << c << endl;
  }
  void bark() {
      cout << "I can bark! Woof woof!!" << endl;
  }
};

int main() {
  // Create object of the Dog class
  Dog dog1;

  // Calling members of the base class
  dog1.eat();
  dog1.sleep();
  dog1.setColor("black");

  // Calling member of the derived class
  dog1.bark();
  dog1.setType("mammal");
  // dog1.type = "mammal"; // Error: member "Animal::type" is inaccessible

  // Using getColor() of dog1 as argument
  // getColor() returns string data
  dog1.displayInfo(dog1.getColor());

  return 0;
}
```
Like _private_ members, _protected_ members are inaccessible outside of the class. 
However, they can be accessed by derived classes and friends classes/functions.
```
class Animal {
  // code
};

class Dog : private Animal {
  // code
};

class Cat : protected Animal {
  // code
}
```
Access Modes in C++ Inheritance
1. __public__: If a derived class is declared in _public_ mode, then the members of the base class are inherited by the derived class just as they are.
2. __private__: In this case, all the members of the base class become _private_ members in the derived class.
3. __protected__: The _public_ members of the base class become _protected_ members in the derived class.
The _private_ members of the base class are always _private_ in the derived class.

## Inheritance Access Control


## C++ Function Overriding

## Inheritance Types

## C++ Friend Function

## C++ Virtual Function

## C++ Templates




From https://www.programiz.com/cpp-programming/inheritance
