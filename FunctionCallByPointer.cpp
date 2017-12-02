//This program depicts the use of call by pointer.

#include <iostream>
using namespace std;

//function declaration
void swapNumbers(int* num1, int* num2);

int main () {
   int num1, num2;

   cout << " Enter number 1: ";
   cin >> num1;
   cout << " Enter number 2: ";
   cin >> num2;

   //calling function
   swapNumbers(&num1, &num2);
   cout << "\n\n Inside Main: \n";
   cout << "\n num1: " << num1;
   cout << "\n num2: " << num2;

   return 0;
}

//function defination
void swapNumbers(int* num1, int* num2) {
   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
   cout << "\n Inside swapNumbers Function: \n";
   cout << "\n num1: " << *num1;
   cout << "\n num2: " << *num2;
}
