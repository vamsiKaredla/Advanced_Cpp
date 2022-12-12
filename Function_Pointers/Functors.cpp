#include <iostream>
using namespace std;

struct Test {
	virtual bool operator()(string &text)=0;
	virtual ~Test(){}
};

// functor is a class or a struct which overloads the Bracets"()" operator
struct Matchtest:public Test {
  virtual bool operator()(string& text) {
  	return text == "lion";
  }
};

void check(string text, Test &test) {
	if(test(text)) {
	cout<< "Text matches!"<<endl;
	}
}

int main() {
	Matchtest m;
        check("lion",m);
        return 0;
}

