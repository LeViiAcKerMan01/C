/*  NEGATIVE NUMBERS

In C, when you divide an 'int' by another 'int', you get only the integer value of the quotient.

# For example, 3 / 2 would be 1, and not 1.5.
# It is rounded down to the nearest integer.

Write a program that does the following:

# Display the sum, product, and quotient of 2 integers: −50 & 40.
# Initialise the following variables in your program and use them in the computation
  # Variable a and assign it the value −50
  # Variable b and assign it the value 40
  # Variables sum, product and quotient - assign the relevant values to them
Note - sum, product and quotient need to be integers
# Output sum, product and quotient to the console on separate lines
*/
#include <stdio.h>

int main() {
  int a = -50 ;
  int b = 40  ;
  int sum = a + b ;
  int product = a * b ;
  int quotient = a / b;
  printf("%d \n", sum); 
  printf("%d \n", product ); 
  printf("%d \n", quotient); 
  return 0;
}