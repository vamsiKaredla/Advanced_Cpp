// function hiding
// if a function has same name in base class and derived class and parametes are
// different, it will always call derived class function, with derived class
// object, to over come this , you need to make the fucntions in base class local
// to the derived class by specifiying the scope

#include <iostream>
using namespace std;

class Base {
public:
  int fun(int i) { cout << "Base " << endl; }
};

class Derived : public Base {
public:
  //making base classe's function "fun" local to this derived class
  using Base::fun;
  int fun(char c) { cout << "derived" << endl; }
};

int main() {
  Derived d;
  d.fun(1);
  d.fun('a');
  return 0;
}
