#include <iostream>
#include <iomanip>
using namespace std;


double addTax(double taxRate, double cost){
  taxRate/=100;
  return taxRate * cost + cost;
}


int main(int argc, char *argv[]){
  double cost = 100.0;
  double taxRate = 7.7525;
  cout << fixed << setprecision(2);
  cout << addTax(taxRate, cost) << endl;


}
