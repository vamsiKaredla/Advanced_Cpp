#include<stdio.h>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

bool match(string text) {
	if(text.size()==3) {
	 return true;
	}
	return false;
}

int count(const vector<string> strings,bool (*match)(string text)) {
	int count =0;
	for(int i=0; i<strings.size();i++) {
		if(match(strings[i])) {
			count++;
		}
	}
	return count;
}

int main() {
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("four");
	texts.push_back("five");

	cout<<count(texts,match);

	return 0;
}
