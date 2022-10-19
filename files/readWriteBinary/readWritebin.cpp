#include <fstream>
#include <iostream>

using namespace std;

#pragma pack(push, 1)

struct Person {
  char name[50];
  int age;
  double weight;
};
#pragma pop

int main() {
  Person someone = {"vamsi", 24, 60.2};
  string filename = "test.bin";

  //////writing a binary file//////
  ofstream ofs;

  ofs.open(filename, ios::binary);

  if (ofs.is_open()) {

    ofs.write(reinterpret_cast<char *>(&someone), sizeof(Person));
    ofs.close();
  } else {
    cout << "couldn't create file" + filename;
    return 1;
  }
  /////reading a binary file//////

  ifstream ifs;
  Person someoneElse = {};
  ifs.open(filename, ios::binary);

  if (ifs.is_open()) {

    ifs.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
    cout << someoneElse.name << "," << someoneElse.age << ","
         << someoneElse.weight << endl;
    ifs.close();
  } else {
    cout << "couldn't read file" + filename;
    return 1;
  }
  return 0;
}
