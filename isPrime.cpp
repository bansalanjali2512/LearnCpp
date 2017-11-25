/*  This program finds difference of highest and
    lowest prime no's in user entered range.
*/

#include <iostream>
using namespace std;

//  To check whether number is prime or not
bool isPrime(int num) {
    if(num <= 1){
        return false;
    }

    else if (num == 2){
        return true;
    }

    else if (num%2 == 0){
        return false;
    }

    else{
        for(int i = 3; i < sqrt(num); i+=2) {
            if(num%i== 0)
                return false;
        }
        return true;
    }
}

//  Main function
int main() {
    int num;
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number.!";
    }
    else {
        cout << num << " is not a prime number.!";
    }
    return 0;
}
