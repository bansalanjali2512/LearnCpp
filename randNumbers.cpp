#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

   //print 10  random numbers
   for(int i = 0; i < 10; i++ ) {
      cout <<"Random Number " <<  (i + 1) << " : ";
      cout << rand() << "\n";
   }

   return 0;
}
