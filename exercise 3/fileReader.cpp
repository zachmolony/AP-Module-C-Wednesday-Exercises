#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include <fstream>
#include <string>
#include <sys/stat.h>
using namespace std; // 'std::' is now implied

int main() {
  string fileName;
  cout << "Enter a valid filename: ";
  cin >> fileName;

  ifstream file(fileName);
  if (!file.is_open()) {
      cout << "\nSorry, '" << fileName << "' does not exist.";
      return 0;
  }

  int lineCount = 0;
  string line;
  while(getline(file, line)){
      lineCount++;
      cout << lineCount << ": " << line << endl;
  }

  file.close();

  cout << "\nTotal number of lines read: " << (lineCount) << endl;
  return 0;
}

