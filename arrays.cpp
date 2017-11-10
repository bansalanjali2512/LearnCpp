//This program inputs array from user and display it
#include <iostream>
using namespace std;

int main () {
   int arr[10]; //Array declaration of size 10

   //Input array elements
   cout << "Enter Array Elements: \n";
   for(int i = 0; i < 10; i++) {
      cin >> arr[i];
   }

   //Display array elements
   cout << "\nArray Is: ";
   for(int i = 0; i < 10; i++ ) {
      cout << arr[i] << " ";
   }
   return 0;
}
