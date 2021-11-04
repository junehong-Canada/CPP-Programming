/*
  public, pprotected, and private
*/

#include <iostream>
using namespace std;

class Base {
private:
  int pvt = 1;
protected:
  int prot = 2;
public:
  int pub = 3;

  // function to access private member
  int getPVT() {
    return pvt;
  }
};

class PublicDerived : protected Base {
public:
  // function to access protected member from base
  int getProt() {
    return prot;
  }

  // function to access public member from base
  int getPub() {
    return pub;
  }
};

int main() {
  PublicDerived object1;
  // cout << "Private = " << object1.getPVT();  // Error: member "Base::getPVT()" is unaccessible
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object1.getProt() << endl;
  // cout << "Public = " << object1.pub;  // Error: member "Base::pub" is unaccessible  
  cout << "Public = " << object1.getPub() << endl;

  return 0;
}
