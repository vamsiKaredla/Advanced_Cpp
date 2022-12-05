#include <iostream>
using namespace std;

void test(void (*pFunc)()) { pFunc(); }

int main() {

  auto func = []() { cout << "Hello" << endl; };
  func();

  test(func);

  test([]() { cout << "hello Again" << endl; });

  // also can execute the fucntion like this:
  //[](){cout<<"Hello"<<endl;}();

  return 0;
}
