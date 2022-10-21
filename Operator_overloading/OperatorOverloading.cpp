#include <iostream>

using namespace std;

class Test {

private:
  int id;
  int name;

public:
  Test(){}; // default constructor

  Test(int id, int name) : id(id), name(name) {}

  void print() { cout << id << ": " << name << endl; }

  // overloading = operator
  const Test &operator=(const Test &test) {
    cout << "Assignment with return type overloaded" << endl;
    id = test.id;
    name = test.name;
    return *this;
  }

  // overloading << operator
  friend ostream &operator<<(ostream &out, const Test &test) {
    out << "leftbit operator oveloaded funtion" << endl;
    out << test.id << ":" << test.name;
    return out;
  }

  int getId() const { return id; }

  int getName() const { return name; }
};

// overloading '+' operator
const Test operator+(const Test &test1, const Test &test2) {
  return Test(test1.getId() + test2.getId(), test1.getName() + test2.getName());
}

// overloading - operator
const Test operator+(const Test &test1, int a) {
  return Test(test1.getId() + a, test1.getName());
}

const Test operator+(int a, const Test &test) {
  return Test(test.getId(), test.getName() + 1);
}

int main() {

  Test test1(1, 2);
  Test test2;
  Test test3;

  test1.print();
  test3 = test2 = test1;

  test2.print();
  test3.print();

  Test est4(3, 4);
  Test test5;

  test5 = est4;
  test5.print();

  cout << test1 << endl << test2 << endl;

  cout << test1 + test2 << endl;

  cout << test1 + test2 + 4 + test3 + 5 << endl;
  return 0;
};
