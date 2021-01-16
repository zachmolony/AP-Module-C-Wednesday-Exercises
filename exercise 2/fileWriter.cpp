#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include <fstream>
#include <string>
#include <sys/stat.h>

using namespace std; // 'std::' is now implied

int main() {
  string name;
  char tryAgain;

  const string FILE_NAME = "list.csv";

  do {
    cout<<"Enter name: ";
    getline(cin, name);

    ofstream myfile(FILE_NAME, ios_base::app);
    myfile << name << ",";
    myfile.close();

    cout << "\n\nTry again? (Y/N): ";
    tryAgain = getchar();
    cin.ignore(256, '\n');
    
  } while (tryAgain == 'Y' || tryAgain == 'y'); // assumes input will be Y/y/N/n but all other chars will quit too

  cout << "Goodbye" << endl;

  return 1;
}
