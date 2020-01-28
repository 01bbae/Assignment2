#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[]) {
  string numbers;
  int a[4][5];
  istringstream iss;
  for(int i=0;i<4;++i){
    cout << "Enter 5 numbers (seperate each number with spaces): " << endl;
    getline(cin, numbers);
    iss.str(numbers);
    for(int j=0;j<5;++j){
      iss >> a[i][j];
    }
    iss.clear();
  }

  for (int i=0; i < 4; ++i) {
    for(int j=0;j<5; ++j){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
