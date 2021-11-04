/*
  C++ Multiple, Multilevel and Hierarchical Inheritance

  Various models of inheritance in C++
  Multilevel Inheritance
*/

#include <iostream>
using namespace std;

class A {
public:
  void display() {
      cout << "Base class content." << endl;
  }
};

class B : public A {};

class C : public B {};

int main() {
  C obj;
  obj.display();
  return 0;
}
