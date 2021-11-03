/*
 Inheritance

 allows us to create a new class(derived class) from an existing class(base class).
 The drived class inherits the features from the base class and can have additional features of its owns.
*/

#include <iostream>
using namespace std;

/*
  Like private members, proected members are inaccessible outside of the class.
  However, they can be accessed by derived classes and friends classes/functions.
*/

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

// Access Modes in C++ Inheritance
// 1. public
// 2. private
// 3. protected
//
// class Dog : private Animal {
//   // code
// }
// class Cat : protected Animal {
//   // code
// }


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
