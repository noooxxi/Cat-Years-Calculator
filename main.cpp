#include <iostream>
#include <string>
using namespace std;
 
int A = 15;  //Age irregularity 1
int B = 10;  //Age irregularity 2
int C = 4;   //Age constant increase
int varH;    //Human years input
 
int main(){
  //Gets human years
  cout << "Enter your cats age in human years: ";
  cin >> varH;
 
  //Function for 3 human years or above
  if (varH >= 3)
  cout << "Your cat is " << A+B+C*(varH-2) << " years old!";
   
  //Function for 2 human years or above
  else if (varH >= 2)
  cout << "Your cat is " << A+B << " years old!";
   
  //Function for 1 human year or above
  else if (varH >= 1)
  cout << "Your cat is " << A << " years old!";
}
