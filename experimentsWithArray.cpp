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

  //fourth
  int arr2[4];
  cout << "\nsizeof(arr2) where arr2 is int arr2[4]: " << sizeof(arr2);

  //fifth
  int *arr3;
  arr3=arr2;
  cout << "\nsizeof(arr3) where arr3 is int *arr3: " << sizeof(arr3);
  cout << "\nsizeof(*arr3) where arr3 is int *arr3=arr2:" << sizeof(*arr3);


  return 0;
}

