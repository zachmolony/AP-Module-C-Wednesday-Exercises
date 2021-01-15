#include <iostream>
#include <sys/stat.h>
#include <string>

using namespace std;

int fileExists() {
  string input;
  struct stat file;

  cout << "Filename to check: ";
  cin>>input;

  if(stat(input.c_str(), &file) != 0) {
     cout << input << " does not exist \n";
  } else {
    cout << input << ", " << file.st_size << " bytes, last modified: " << ctime(&file.st_mtime);
  }
  return 0;
}
