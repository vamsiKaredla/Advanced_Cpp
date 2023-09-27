//dynamic cast is used at run time to find out correct down_cast
//
//Note: need atleast one virtual function in base class


#include<iostream>

using namespace std;

class Base{
 virtual void print() {cout <<"Base"<<endl;}
};

class Derived1: public Base {
 void print() { cout<<"derived1"<<endl;}
};

class Derived2: public Base {
 void print() { cout<<"derived2"<<endl;}
};


int main() {

	Derived1 d1;

	Base *bp = dynamic_cast<Base*>(&d1);

	Derived2 *d2 = dynamic_cast<Derived2*>(bp);

	if(d2==NULL){
		cout<<"dynamic casting failed"<<endl;
	
	}else{
		cout<<"dynamic cast success"<<endl;
	}
	return 0;
}
