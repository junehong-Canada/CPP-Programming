/*
  C++ friend Function and friend Classes

  Data hiding restricts the access of private members from outside of the class.
  Protected members can only be accessed by derived classes and are inaccessible from outside.
  Friend functions (friend class) break this rule and allow to access member functions from outside the class.
*/

#include <iostream>
using namespace std;

class Distance {
private:
  int meter;

  // friend function
  friend int addFive(Distance);

public:
  Distance() : meter(0) {}
};

// friend function definition
int addFive(Distance d) {
  // accessing private members from the friend function
  d.meter += 5;
  return d.meter;
}

int main() {
  Distance D;
  cout << "Distance: " << addFive(D) << endl;
  return 0;
}
