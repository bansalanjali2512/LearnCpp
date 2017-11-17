#include <iostream>
#include <cmath>
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

  //swapping logic: swap first half of array with second half
  int temp;
  for(int i = 0; i < (size/2); i++) {
    temp = arr[i];
    arr[i] = arr[(int(ceil(size/2.0))+i)];
    arr[(int(ceil(size/2.0))+i)] = temp;
  }

  cout << "\n\nArray after swapping is: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
