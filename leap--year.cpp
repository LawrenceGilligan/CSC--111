// Lawrence Gilligan
#include <iostream>
using namespace std;

int main() {
   // Initialize and Declare the Year Variable
   int year = 0;

   // Ask user to enter a year
   cout << "Please enter a year: ";
   cin >> year;

   // Calculate and output the provided year to determine if it is a leap year
   if (year % 400 == 0 || (year % 4 == 0 && year % 100 !=0)) {
      cout << 366 << endl;
   } else {
      cout << 365 << endl;
   }
   return 0;
}