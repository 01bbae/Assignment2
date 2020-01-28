#include <iostream>
using namespace std;

void zeroBoth(int& num1, int& num2){
  num1=0;
  num2=0;
}


int main(int argc, char *argv[]){
  int num1=2;
  int num2=5;
  zeroBoth(num1, num2);
  cout << num1 << " " << num2 << endl;
}
