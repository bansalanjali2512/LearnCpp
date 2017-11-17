#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter size of array: ";
  cin >> size;

  int *arr=new int[size];
  cout << "\nEnter array : ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "\nArray before swapping is: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  //swapping logic: swap ith and (size-1-i)th element of array
  int temp;
  for(int i = 0; i < (size/2); i++) {
    temp = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i] = temp;
  }

  cout << "\n\nArray after swapping is: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
