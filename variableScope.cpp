#include <iostream>
using namespace std;

int globalVar; //global variable

int main () {
   int localVar1, localVar2; //local variables
 
   localVar1 = 20;
   localVar2 = 30;
   globalVar = localVar1 + localVar2;
  
   cout << "Values Are : \n ";
   cout << "globalVar : " << ::globalVar << "\n";
   //global variables are accesed with :: scope resolution operator.
   cout << "localVar1 : " << localVar1 << "\n";
   cout << "localVar2 : " << localVar2 << "\n";
   
   return 0;
} 
