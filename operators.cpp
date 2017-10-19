#include <iostream>
using namespace std;

int main(){

	int testValue = 15;
	cout << testValue << endl;
	testValue >>= 2; 			//Right Shift by 2
	cout << testValue << endl;
	testValue <<= 2; 			//Left Shift by 4
	cout << testValue << endl;

	testValue > 0 ? cout << "Yes" : cout << "No"; 			// (condition ? if true : else)  -  One liner if else.

	float floatValue = 3.1415;

	cout << endl << int(floatValue);						//type casting.
	return 0;
}
