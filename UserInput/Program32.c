/*  FIND THE AREA OF ANY RECTANGLE

Let us revisit our favorite rectangle and its area problem

Write a program that does the following

# Declare 2 integer variables length and width
# In this problem - accept 2 user-defined inputs from the console 
  and initialize these values length and width
# Create another integer variable area - compute the area of the rectangle 
  and store it as area
# Output area to the console

Input
10
23

Output
Area of the rectangle is: 230
*/
#include <stdio.h>

int main() {
  int length, width;
  int area ;
  scanf("%d", &length);
  scanf("%d", &width);
  area = length * width;
  printf("Area of the rectangle is: %d", area);
  return 0;
}