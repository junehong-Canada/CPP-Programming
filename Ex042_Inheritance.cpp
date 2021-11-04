/*
  C++ Multiple, Multilevel and Hierarchical Inheritance

  Various models of inheritance in C++
  Multiple Inheritance
*/

#include <iostream>
using namespace std;

class Mammal {
public:
  Mammal() {
    cout << "Mammals can give direct birth." << endl;
  }
};

class WingedAnimal {
public:
  WingedAnimal() {
    cout << "Winged animal cal flap." << endl;
  }
};

class Bat: public Mammal, public WingedAnimal {};

int main() {
  Bat b1;
  return 0;
}

/*
  Ambiguity in Multiple Inheritance

class base1 {
  public:
      void someFunction( ) {....}
};
class base2 {
    void someFunction( ) {....}
};
class derived : public base1, public base2 {};

int main() {
    derived obj;
    obj.someFunction() // Error!
}
=>
int main() {
    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}
*/
