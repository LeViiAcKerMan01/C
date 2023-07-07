/*  COST OF PAINTING

Write a program that does the following

# Find the area of a square of side 14cm.
# Also, find the cost of painting the square if the paint costs is 7$ cm/sq.
# Initialise the following variables in your program and use them in the computation
  # s to store the length of side the square 
  # area to store the area of the square
  # cost to store the cost of painting

Output area and cost to the console on separate lines.
Note: Include the character "$" with the cost without any space while printing the output.
*/
//Solution as follows

#include <stdio.h>

int main() {
  int s = 14 ;
  int area = s * s ;
  int cost = area * 7 ;
  printf("%d \n", area );   //Area and cost have to be output on separate lines
  printf("%d", cost );      //'$' has to be printed after cost without any space
  printf("$"); 
  return 0;
}