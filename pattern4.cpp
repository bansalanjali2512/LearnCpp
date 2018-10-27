/*
  This program prints following pattern:
  *****
   ***
    *
*/
// nRows => number of rows
// nSpace => number of space between two stars
//symbol => if want unique symbool then can provide otherwise it will take astrik/star
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

  int nSpace=0;
  char symbol = "*";
  char ans = "n";
  cout<<" \n Do you want some symbol, By default its astrik/star (y/n) : ";
  cin>>ans;
  if(ans == "y" || ans == "Y" || ans == "yes" || ans == "YES")
  {
    cout<<"\n Enter the symbol for pattern, By default its star/astrik ";
    cin>>symbol;
  }
  
  for (int i=nRows; i>=1; i--) {
    for (int k=nSpace; k>=1; k--) {
      cout << " ";
    }
    for (int j=(2*i-1); j>=1; j--) {
      cout << symbool;
    }
    cout << "\n";
    nSpace++;
  }

  return 0;
}
