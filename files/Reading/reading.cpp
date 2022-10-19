#include<iostream>
#include<fstream>
#include<cerrno>
#include<cstring>
using namespace std;

int main(){

	std::string inputFileName{"test.txt"};

	ifstream fs;

	fs.open(inputFileName);

	if(fs.is_open()){
		string line;
		while(fs){
			getline(fs,line);
			cout<<line<<endl;
		}
	}
	else{
		cout<<"uanble to open file "<<inputFileName<<" err no "<<strerror(errno)<<endl;
		
	}
	return 0;
}
