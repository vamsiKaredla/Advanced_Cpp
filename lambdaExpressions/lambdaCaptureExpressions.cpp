#include <iostream>
using namespace std;

class Test {
private:
  int one{1};
  int two{2};

public:
  void run() {
    int three{3};
    int four{4};

    auto pLambda = [this, three, four]() {
      cout << one << endl;
      cout << two << endl;
      cout << three << endl;
      cout << four << endl;

      one = 111;
    };
    pLambda();
    cout << one << endl;
  }
};

int main() {
  int one = 1;
  int two = 2;
  int three = 3;

  // capture one and two by value
  [one, two]() { cout << one << two << endl; }();

  // capture all variables by value
  [=]() { cout << one << two << three << endl; }();

  // capture all local variables by value and three by reference
  [=, &three]() {
    three = 7;
    cout << one << "," << two << endl;
  }();
  cout << three << endl;

  // default apture all local variables by reference
  [&]() {
    three = 8, two = 9;
    cout << one << "," << two << endl;
  }();
  cout << two << endl;

  // capture all local variable by reference but two and three by value
  [&, two, three]() {
    one = 100;
    cout << one << "," << two << endl;
  }();
  cout << one << endl;

  Test test;
  test.run();
  return 0;
}
