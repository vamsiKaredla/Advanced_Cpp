#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
  string value;

  decltype(value) name = "bob";

  cout << typeid(value).name() << endl;
  cout << name << endl;

  return 0;
}
