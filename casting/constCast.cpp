//can be used to change the const or volatile qualifiers of pointers or references.
//

#include<iostream>
using namespace std;

int main() {
	const int a1 = 10; //original address was constant
	const int *b1 = &a1;
	int *d1 = const_cast<int*>(b1);
	*d1=15;//invalid and undefined behaviour

	int a2 = 20;
	const int *b2 = &a2;
	int *d2 = const_cast<int*>(b2);
	*d2 = 30;//valid code as original address is not a const

	return 0;
}
