#include <iostream>
using namespace std;

//function declaration
int findMax(int num1, int num2);

int main () {
   int num1, num2;
   int result;

   cout << "Enter number 1: ";
   cin >> num1;
   cout << "Enter number 2: ";
   cin >> num2;

   //calling function
   result = findMax(num1, num2);
   cout << "Max value Is: " << result;

   return 0;
}

//function defination
int findMax(int num1, int num2) {
   if (num1 > num2)
      return num1;
   else
      return num2;
}
