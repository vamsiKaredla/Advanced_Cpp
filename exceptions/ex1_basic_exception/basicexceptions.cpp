#include <iostream>
using namespace std;

void mightGoWrong() {
	
	bool error = false;
	bool error2 = true;
	if(error) {
		throw "somethig went wrong";
	}
	if(error2) {
		throw string("somethinf else went wrong");
	}
}

void usesMightGoWrong() {
	mightGoWrong();
}

int main() {
	try {
	usesMightGoWrong();
	}
	catch(int e) {
		cout<<"ERROR no:" << e;
	}
	catch(char const* e) {
		cout <<"Error message:" << e;
	}
	catch(string &e) {
		cout <<"ERROR string messgae:"<<e;
	}
	return 0;
}
