#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include <fstream>
#include <string>
using namespace std; // 'std::' is now implied

int main() {
  string name;
  char tryAgain;
  ofstream myfile;

  do {
    cout<<"Enter name: ";
    getline(cin, name);

    myfile.open ("list.csv");
    cout<<"Updating file... \n";
    myfile << name <<"\n";
    myfile.close();

    cout << "\n\nTry again? (Y/N): ";
    tryAgain = getchar();
    cin.ignore(256, '\n');
  } while (tryAgain == 'Y' || tryAgain == 'y'); // assumes input will be Y/y/N/n but all other chars will quit too

  return 1;
}

