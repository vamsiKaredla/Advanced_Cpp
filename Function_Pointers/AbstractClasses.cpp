#include <iostream>
using namespace std;

class Animal {
public:
  Animal()
  {
   cout<<"animal constructor called"<<endl;
  }
  // pure virtual method
  virtual void speak() const = 0;
  virtual void run() = 0;
};

class Dog : public Animal {
public:
  Dog()
  {
  cout<<"Dog constructor called"<<endl;
  }
  virtual void speak() const { cout << "wppf" << endl; }
};

class Pug : public Dog {
public:
int a;
Pug()
{
cout<<"pub constuctor called"<<endl;
}
  virtual void run() { cout << "Pug Running" << endl;
  a=5; }
};

int main() {
  // cannot instantiate pure virtual class
  // Animal animal;
  //const Animal &a = Pug();
  //const Animal& a = Pug();
  //a.speak();
  //a.run();
  
  Pug p;
  Animal& a =p;
  a.speak();
  p.run();
  
  return 0;
}
