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

  cout << "\nArray is: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  int sum=0;
  for(int i = 0; i < size; i++) {
    sum += arr[i];
  }
  cout << "\n\nSum of array elements: " <<sum;

  return 0;
}
