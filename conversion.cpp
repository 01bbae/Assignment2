#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void convertToMetric(string& feet, string& inches, double& meters, double& cms){
  double foot = stod(feet);
  double inch = stod(inches);
  double meter;
  double cm;
  foot+=inch/12;
  meter=foot*0.3048;
  //if has meter is not less than 1
  if(floor(meter)!=0){
    cm = meter-floor(meter);
    meter = floor(meter);
  }else{
    cm = meter;
    meter = 0;
  }
  cm*=100;
  //setting outside variables to function variables
  meters=meter;
  cms=cm;
}

void getInput(string& feet,string& inches){
  cout << "Enter number of feet: " << endl;
  cin >> feet;
  if(feet!="exit"){
    cout << "Enter number of inches: " << endl;
    cin >> inches;
  }
}

void getOutput(string& feet,string& inches,double& meters, double& cms){
  cout << feet << " feet and " << inches << " inches is " << meters << " meters and " << cms << " centimeters." << endl;
}

int main(int argc, char *argv[]){
  string feet = "3";
  string inches = "4";
  double meters;
  double cms;
  string *feetptr = &feet;
  string *inchesptr = &inches;
  while(true){
    getInput(feet, inches);
    if(feet=="exit"){
      break;
    }
    convertToMetric(feet, inches,meters,cms);
    getOutput(feet, inches,meters,cms);

  }
}
