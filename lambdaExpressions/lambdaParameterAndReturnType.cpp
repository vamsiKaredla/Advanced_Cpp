#include <iostream>
using namespace std;

void runName(void (*pName)(string)) { pName("Mob"); }

void runDivide(double (*pDivide)(double, double)) {
  cout << pDivide(9, 3) << endl;
}

int main() {
  auto pName = [](string name) { cout << "name " << name << endl; };
  pName("vamsi");
  runName(pName);

  auto pDivide = [](double a, double b) -> double {
    if (b == 0.0)
      return 0;
    return a / b;
  };
  cout << pDivide(10.0, 5.0) << endl;

  cout << pDivide(10, 0) << endl;

  runDivide(pDivide);
}
