//Program to do experiments in accessing array

#include <iostream>
using namespace std;

int main() {

  //first
  int arr1[] = {1,2,3,4};
  int size = sizeof(arr1)/sizeof(arr1[0]);
  cout << "arr1 : ";
  for(int i = 0; i < size; i++) {
    cout << arr1[i] << " ";
  }

  //second
  cout << "\narr1[-1] by default: " << arr1[-1];

  //third
  arr1[-1] = 10;
  cout << "\narr1[-1] after assigning value: " << arr1[-1];
  cout << endl;

  return 0;
}

