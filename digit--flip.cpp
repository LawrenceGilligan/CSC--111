// Lawrence Gilligan
// Reverse the order of an integer
#include <iostream>
using namespace std;

int main () {
   // Declare Variable and Initialize as long long
   int user_integer = 0;
   int last_digit = 0;       
   int reversed_integer = 0; 
   int iteration = 1;              

   // Ask user for an integer and put it in a variable
   cout << "Please provide an integer, that does not end or begin with a 0: " << endl;
   cin >> user_integer; 

   // Isolate last digit/Bring to front/Move to next digit/Output iteration and integer/Increase iteration by 1
   while (user_integer != 0) {
         last_digit = user_integer % 10;
         reversed_integer = (reversed_integer * 10) + last_digit;
         user_integer /= 10;
         cout << "Iteration " << iteration << ": " << reversed_integer << endl;         
         iteration++;
   }
   
   // Decrease iteration by 1 
   iteration--;
   
   // Output reversed integer and total iterations
   cout << "The reversed integer is: " << reversed_integer << " (It only took you " << iteration << " iterations to figure it out!)" << endl;
   
   // Always return something *Bob said so*
   return 0;
}