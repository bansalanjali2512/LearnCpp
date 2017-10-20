#include <iostream>
using namespace std;

extern int externVar1;
extern int externVar2;
extern int sum;

int main(int argc, char const *argv[]){

  int externVar1;
  int externVar2;
  int sum;

  cout << "Enter first number: ";
  cin >> externVar1;
  cout << "Enter second number: ";
  cin >> externVar2;

  sum = externVar1 + externVar2;
  cout << "Sum of " << externVar1 << " and " << externVar2 << " is: " << sum;

  return 0;
}
