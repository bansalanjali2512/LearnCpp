//Program to use string functions

#include <iostream>
#include <cstring>

using namespace std;

int main () {

   char str1[] = "Hello ";
   char str2[] = "World.!";
   char str3[30];

   //copy str1 into str3
   strcpy(str3, str1);
   cout << "strcpy(str3, str1): " << str3;

   //concatenates str1 and str2 and store result into str1
   strcat( str1, str2);
   cout << "\n\nstrcat(str1, str2): " << str1;

   //lenghth of str1, str2 & str3
   cout << "\n\nstrlen(str1): " << strlen(str1);
   cout << "\nstrlen(str2): " << strlen(str2);
   cout << "\nstrlen(str3): " << strlen(str3);

   return 0;
}
