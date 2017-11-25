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

//  To find difference in highest and lowest prime no's
int maxDifference(int startVal, int endVal) {

    int minPrime = 0;
    int maxPrime = 0;
    for (int i=startVal; i <= endVal; i++) {
        if(isPrime(i)) {
            minPrime = i;
            break;
        }
    }
    for (int i=endVal; i >= startVal; i--) {
        if(isPrime(i)) {
            maxPrime = i;
            break;
        }
    }
    return (maxPrime - minPrime);
}

//  Main function
int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int startVal;
        int endVal;
        cin >> startVal >> endVal;
        int result = maxDifference(startVal, endVal);
        cout << result << endl;
    }
    return 0;
}
