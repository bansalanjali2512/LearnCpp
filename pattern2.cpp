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

  label:
  cout << "Enter number of rows you want to print: ";
  cin >> nRows;
  if (nRows < 0) {
    cout << "Oops..Enter a positive number..!\n";
    goto label;
  }

  for (int i=nRows; i>=1; i--) {
    for (int j=1; j<=i; j++) {
        cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
