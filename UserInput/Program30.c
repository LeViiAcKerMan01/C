/*  CALCULATOR

Write a program that does the following

# Create a calculator
# Declare 2 integer variables a and b
# Initialise the variables a and b based on two user inputs
# Declare an integer variable sum - and store the value of addition of a and b
# Declare an integer variable diff - and store the value of subtraction of a and b
# Output sum and diff to the console on separate lines
*/ 
#include <stdio.h>

int main() {
  int a,b;
  int sum;
  int diff;
  scanf("%d %d", &a, &b);
  sum = a + b ;
  diff = a - b ;
  printf("Sum is: %d \n", sum);
  printf("Difference is: %d", diff );
  return 0;
}