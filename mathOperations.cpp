//Program to perform math operations

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  cout << " *** Math Operations *** \n\n";
  //This function takes an angle (as a double) and returns the cosine.
  cout << " cos(200.374): " << cos(200.374) << "\n";

  //This function takes an angle (as a double) and returns the sine.
  cout << " sin(200.374): " << sin(200.374) << "\n";

  //This function takes an angle (as a double) and returns the tangent.
  cout << " tan(200.374): " << tan(200.374) << "\n";

  //This function takes a number and returns the natural log of that number.
  cout << " log(200.374): " << log(200.374) << "\n";

  //The first is a number you wish to raise and the second is the power you wish to raise it t
  cout << " pow(2,3): " << pow(2,3) << "\n";

  //If you pass this function the length of two sides of a right triangle, it will return you the length of the hypotenuse.
  cout << " hypot(5,12): " << hypot(5,12) << "\n";

  //You pass this function a number and it gives you the square root.
  cout << " sqrt(200.374): " << sqrt(200.374) << "\n";

  //This function returns the absolute value of an integer that is passed to it.
  cout << " abs(-200): " << abs(-200) << "\n";

  //This function returns the absolute value of any decimal number passed to it.
  cout << " fabs(200.374): " << fabs(200.374) << "\n";

  //Finds the integer which is less than or equal to the argument passed to it.
  cout << " floor(200.374): " << floor(200.374) << "\n";

  return 0;
}
