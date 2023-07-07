/*  AREA OF RECTANGLE

Write a program that does the following

# Find out and display the area of a rectangle of sides 45 and 76 respectively.
# Declare variables length,width and area and assign the relevant values to them
# Make sure to add some text as well, so that the person reading the output knows
  what the output means
*/
#include <stdio.h>

int main() {
  int length = 45 ; 
  int width = 76 ; 
  int area = length * width;
  printf("The Area of the given rectangle is %d", area ); 
  return 0;
}