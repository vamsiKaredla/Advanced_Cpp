#include <iostream>
using namespace std;

class Parent {
private:
  int one;

public:
  int a;
  Parent() : one(0) { cout << "parent default constructor" << endl; }
  Parent(Parent const &other) { cout << "parent copy constructor" << endl; }
  virtual void print() { cout << "parent" << endl; }
};

class Child : public Parent {

private:
  int two;

public:
  Child() : two(0) {}
  void print() { cout << "child" << endl; }
};

int main() {

  Child c1;
  Parent &p1 = c1;
  p1.print();

  Parent p2 = Child();
  p2.print();

  cout << p2.a << endl;

  return 0;
}
