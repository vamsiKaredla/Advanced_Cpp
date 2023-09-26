#include <iostream>
using namespace std;

class Base {
	int x;
public:
	Base() {}
	Base(int x):x{x} {}
	//declaring fun as a friend function 
	//friend function will be able to access private members of the class
	friend void fun(Base b);
	friend class friClass;
};

class friClass {
	public:
	 void accessPrivateVariableOfBaseClass(Base b){
	 cout<<b.x<<endl;
	 b.x=30;
	 cout<<b.x<<endl;
	 }
};

void fun(Base obj) {
	cout<<obj.x<<endl;
	obj.x=20;
	cout<<obj.x<<endl;
}

int main() {
	Base b(10);
	fun(b);
	friClass f;
	f.accessPrivateVariableOfBaseClass(b);
	return 0;
}
