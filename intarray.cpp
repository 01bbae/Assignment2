#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int number;
  int numberArray[10];
  for(int i=0;i<10;){
    cout << "Enter number" << endl;
    cin >> number;
    if(number > 0){
      numberArray[i]=number;
      i++;
    }
  }

  for(int i=0;i<10;++i){
    if(i!=9){
      cout << numberArray[i] << " ";
    }else{
      cout << numberArray[i] << endl;
    }

  }
  return 0;
}
