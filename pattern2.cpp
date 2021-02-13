/*
  This program prints following pattern:
  ***
  **
  *
*/

#include <iostream>
using namespace std;

int main() {
  int nRows;
  
  cout << "Enter number of rows you want to print: ";
  cin >> nRows;
  
  while(nRows < 0){
  cout << "Oops..Enter a positive number..!\n";
  cout << "Enter again: ";
  cin >> nRows;
  } 

  for (int i=nRows; i>=1; i--) {
    for (int j=1; j<=i; j++) {
        cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
