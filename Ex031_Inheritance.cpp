/*
  C++ Function Overriding

  Suppose, the same function is defined in both the derived clas and the based class.
  Now if we call this function using the object of the derived class, the function of the derived class is executed.
*/

#include <iostream>
using namespace std;

class Base {
public:
  void print() {
      cout << "Base Function" << endl;
  }
};

class Derived : public Base {
public:
  void print() {  // Overriding
    cout << "Drived Function" << endl;

    // call overrridden function
    Base::print();
  }
};

int main() {
  Derived derived1, derived2;
  derived1.print();

  // pointer of Base type that points to derived1
  Base* ptr = &derived1;
  // call function of Base class using ptr
  ptr->print();
  // "Base Function" <= This is because even though ptr points to a Derived object,
  // it is actually of Base type. So, it calls the member function of Base.
  // In order to override the Base function instead of accessing it, we need to use virtual functions in the Base class.

  // access print() function of the Base class
  // To access the overrridden function of the base class,
  // we use the scope resolution operator ::
  derived2.Base::print();
  return 0;
}
