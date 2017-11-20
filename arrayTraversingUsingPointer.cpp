//Program to traverse array using pointer

#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter size of array: ";
  cin >> size;

  int *arr=new int[size];
  cout << "\nEnter array : ";
  for(int i = 0; i < size; i++) {
    cin >> *(arr+i);
  }

  cout << "\nArray is: ";
  for(int i = 0; i < size; i++) {
    cout << *(arr+i) << " ";
  }
  cout << endl;

  return 0;
}
