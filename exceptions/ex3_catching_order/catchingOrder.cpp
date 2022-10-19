#include <stdio.h>
#include <iostream>
#include <exception>

using namespace std;
void goesWrong()
{
	bool error1 = true;
	bool error2 = false;

	if(error1){
		throw bad_alloc();
	}
	if(error2){
		throw exception();
	}
}

int main(){
	try{
		goesWrong();
	}catch(bad_alloc &e)
	{
		std::cout<<e.what()<<std::endl;//always catch sub class exception first
	}catch(exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	return 0;
}

