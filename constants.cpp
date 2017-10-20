#include <iostream>
using namespace std;

#define LENGTH 20
#define BREADTH 10

int main() {
   const int  SIDE = 10;
   int recArea;  
   int sqArea;
   
   recArea = LENGTH * BREADTH;
   sqArea = SIDE * SIDE;
   cout << "Area of Rectangle: " << recArea;
   cout << "\nArea of Square: " << sqArea;
   
   return 0;
}
