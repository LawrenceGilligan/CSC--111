// Lawrence Gilligan
#include <iostream>
using namespace std;

// Main Function
int main () {
   // Create variables x & y-coordinates, quadrant, radius, and area
   int x = 0;
   int y = 0;
   double radius = 0; 
   double area = 0;
   
   // Ask user for x-coordinate
   cout << "Enter the x coordinate of a circle's origin: " << endl;
   cin >> x;

   // Ask user for y-coordinate
   cout << "Enter the y coordinate of a circle's origin: " << endl;
   cin >> y;

   // Ask user for radius in inches
   cout << "Enter the circle's radius (in inches): " << endl;
   cin >> radius;

   // Write a statement that calculates the area of the circle
   area = 3.14159 * (radius * radius);
   
   // Output the quadrant in which the circle origin is located
   if (x > 0 && y > 0) {                                                    // Quadrant I 
     cout << "The origin of the circle origin is in Quadrant I!" << endl;   
   } else if (x > 0 && y < 0) {                                             // Quadrant II 
     cout << "The origin of the circle origin is in Quadrant II!" << endl;  
   } else if (x < 0 && y < 0) {                                             // Quadrant III 
     cout << "The origin of the circle origin is in Quadrant III!" << endl; 
   } else if (x < 0 && y > 0) {                                             // Quadrant IV
     cout << "The origin of the circle origin is in Quadrant IV!" << endl;
   } else if (x == 0 && y == 0) {                                           // Origin
     cout << "The origin of the circle is origin (0,0)!" << endl;
   } else {                                                                 // On-Axis
     cout << "The origin of the circle is origin on Axis!" << endl;
   }

   // Output the area of the circle in square inches
   cout << "The area of the circle is " << area << " square inches." << endl;

   return 0;
}