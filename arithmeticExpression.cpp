#include <iostream>
using namespace std;

//**************************
//Function Prototypes
//**************************

int add(int, int);
int calPower(int, int);

//**************************
//main function
//**************************

void main() {
  int result;
  result = add(calPower(12,5),6);
  cout << " Result Is : " << result;
} //end of main function


//***************************
//Function definations
//***************************

int add(int num1, int num2) {
  return (num1 + num2);
} //end of add function

int calPower(int num, int exp) {
  if (exp==0) {
    return 1;
  }
  else {
    return num*calPower(num,exp-1)
  }
} //end of calPower function
