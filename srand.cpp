#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

    //srand generate a set of values that depend on current time
    srand( (unsigned)time( NULL ) );
    //print 10  random numbers
    for(int i = 0; i < 10; i++ ) {
        cout <<"Random Number " <<  (i + 1) << " : ";
        cout << rand() << "\n";
    }

    return 0;
}

