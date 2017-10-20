#include <iostream>
using namespace std;

int main() {
   
   //Interger Literals
   int iLiteral1 = 10;
   int iLiteral2 = 10u;
   int iLiteral3 = 0x4b;
   int iLiteral4 = 10l;
   int iLiteral5 = 10ul;

   //Floating point literals
   float fLiteral1 = 5.6;
   float fLiteral2 = 3.14159;
   float fLiteral3 = 314159E-5L;
   
   //Boolean literals
   bool bLiteral1 = TRUE;
   bool bLiteral2 = FALSE;
   
   //Character literals
   char cLiteral = 'a';
   
   //String literals
   
   cout << iLiteral1 << " ";
   cout << iLiteral2 << " ";
   cout << iLiteral3 << " ";
   cout << iLiteral4 << " ";
   cout << iLiteral5 << " " << "\n";
   cout << fLiteral1 << " ";
   cout << fLiteral2 << " ";
   cout << fLiteral3 << " " << "\n";
   cout << bLiteral1 << " ";
   cout << bLiteral2 << " " << "\n";
   cout << cLiteral;
   
   return 0;
}
