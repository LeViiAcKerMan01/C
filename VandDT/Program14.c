/*  DOUBLE DATATYPE

If we want to introduce decimal values we use the double keyword before declaring the variable.
For printing double datatype we use "%lf" format specifier.

Write a program that does the following:

# Find the area of a circle whose radius is 8.9 cm. Take pi = 3.14
# Declare variables radius, pi and area and assign the relevant values to them
# Note: Area of a circle is pi × radius × radius
*/
#include <stdio.h>

int main() {
  double pi = 3.14 ;
  double radius = 8.9 ;      //radius has to be declared as a 'double'
  double area = pi * radius * radius;
  printf("The Area of the given Circle is %lf", area ); 
  return 0;
}