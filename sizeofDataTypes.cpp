//Program to print size of data types

#include <iostream>
using namespace std;

int main() {
  
  cout << "Size of Data Types : " << "\n\n";
  cout << "sizeof(char) : " << sizeof(char) << "\n";
  cout << "sizeof(signed char) : " << sizeof(signed char) << "\n";
  cout << "sizeof(unsigned char) : " << sizeof(unsigned char) << "\n";
  cout << "sizeof(int) : " << sizeof(int) << "\n";
  cout << "sizeof(signed int) : " << sizeof(signed int) << "\n";
  cout << "sizeof(unsigned int) : " << sizeof(unsigned int) << "\n";
  cout << "sizeof(short int) : " << sizeof(short int) << "\n";
  cout << "sizeof(signed short int) : " << sizeof(signed short int) << "\n";
  cout << "sizeof(unsigned short int) : " << sizeof(unsigned short int) << "\n";
  cout << "sizeof(long int) : " << sizeof(long int) << "\n";
  cout << "sizeof(signed long int) : " << sizeof(signed long int) << "\n";
  cout << "sizeof(unsigned long int) : " << sizeof(unsigned long int) << "\n";
  cout << "sizeof(float) : " << sizeof(float) << "\n";
  cout << "sizeof(double) : " << sizeof(double) << "\n";
  cout << "sizeof(long double) : " << sizeof(long double) << "\n";
  cout << "sizeof(wchar_t) : " << sizeof(wchar_t) << "\n";
	
  return 0;
}

/*
Output : 
Size of Data Types : 

sizeof(char) : 1
sizeof(signed char) : 1
sizeof(unsigned char) : 1
sizeof(int) : 4
sizeof(signed int) : 4
sizeof(unsigned int) : 4
sizeof(short int) : 2
sizeof(signed short int) : 2
sizeof(unsigned short int) : 2
sizeof(long int) : 8
sizeof(signed long int) : 8
sizeof(unsigned long int) : 8
sizeof(float) : 4
sizeof(double) : 8
sizeof(long double) : 16
sizeof(wchar_t) : 4
*/
