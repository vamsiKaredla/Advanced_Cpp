//function pointers store the address of another function
//
//how to create
//int add(int a, int b) {
//retunr a+b
//}
//
//int (*functionPointer)(int, int)=&add;
//
//to call functionPointer(1,2);
//
//typedef int(*mathFun)(int,int);
//
//where to use?


#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

// function to check the size of string
bool match(string text) {
  if (text.size() == 3) {
    return true;
  }
  return false;
}

// example of function which takes function pointer as a parameter
int count(const vector<string> strings, bool (*match)(string text)) {
  int count = 0;
  for (int i = 0; i < strings.size(); i++) {
    if (match(strings[i])) {
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
  // passing function as a parameter
  cout << count(texts, match);

  return 0;
}
