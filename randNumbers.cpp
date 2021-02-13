#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main () {
     
   //srand functionis used to provide seed to random function.
   //time() function is used to track system time.
   srand(time(NULL));
   
   //print 10  random numbers
   for(int i = 0; i < 10; i++ ) {
      cout <<"Random Number " <<  (i + 1) << " : ";
      cout << rand() << "\n";
   }

   return 0;
}
