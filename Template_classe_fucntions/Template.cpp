#include <iostream>
using namespace std;

template <class T> class Test {
private:
  T obj;

public:
  Test() { cout << "default ctor" << endl; }
  Test(T obj) : obj(obj) {}

  void print() { cout << obj << endl; }
};

template <typename T> void print(T obj) { cout << obj << endl; }

template <class T> void show() { cout << T() << endl; }

int main() {

  Test<int> test(5);
  test.print();

  Test<string> test1("Naruto");
  test1.print();

  print('c');

  // show(); couldn't deduce template parameter ‘T’

  show<double>();

  return 0;
}
