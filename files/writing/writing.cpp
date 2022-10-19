#include<iostream>
#include<fstream>
using namespace std;
int main(){
	std::string outPutFileName{"test.txt"};

	fstream outFile;
	outFile.open(outPutFileName,ios::out);
	
	if(outFile.is_open()){
		for(int i=1; i<=5 ;i++){
			outFile<<i<<"this is a line"<<std::endl;
		}
		outFile.close();
	}
	else{
		std::cout<<"unable to create"<<outPutFileName<<std::endl;
	}

	return 0;
}
	
