/*  TRIMMING DECIMAL PLACES

Suppose we have a value with a lot of digits after the decimals.
Sometimes, they are useless in the output we are printing.
We can use the %f format specifier to trim decimal places according to our requirements.

for eg -
      double int = 1.101000000
      \\0.3f - this specifies how many digits we want after the decimal in our case 3.
      printf("%0.3f", int)   
      output - 1.101                

Task

Write a program which does the following:

# Declare a variable num and assign it the value 4.4587658.
# Output the variable with only 2 decimal places.
*/
#include <stdio.h>

int main() {
  double num = 4.4587658 ;
  printf("%0.2f", num );
  return 0;
}