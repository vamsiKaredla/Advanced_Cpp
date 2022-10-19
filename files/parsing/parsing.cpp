#include <fstream>
#include <iostream>

using namespace std;

int main() {

  string inputFile = "stat.txt";
  ifstream fs;

  fs.open(inputFile);

  if (fs.is_open()) {

    while (fs) {
      string line;
      getline(fs, line, ':');

      int population;

      fs >> population;
      fs >> ws;
      if (!fs) {
        break;
      }
      cout << "'" << line << "'"
           << "----- '" << population << "'" << endl;
    }

    fs.close();
    return 0;
  } else {
    cout << "unable to open file:" << inputFile << endl;
    return 1;
  }
}
