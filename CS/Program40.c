/*  AND STATEMENTS

 && keyword is a logical operator, which is used to combine conditional statements.

Write a program that does the following:

# Declare 2 variables a and b and initialise them to the values 15 and 35 respectively
# Compute if each of a and b is divisible by both 7 and 5
# Depending on the result above - output the following to the console
   # The number is divisible by both 5 & 7
   # The number is not divisible by both 5 & 7
*/
#include <stdio.h>

int main() {
  int a;
  int b;
  a = 15;
  b = 35;
  if (a%7 == 0 && a%5 == 0 ) {
    printf("The number is divisible by both 5 & 7 \n");
    }  
    else {
    printf("The number is not divisible by both 5 & 7 \n");
    }

    if (b%7 == 0 && b%5 == 0 ) {
    printf("The number is divisible by both 5 & 7 \n");
    }  
    else {
    printf("The number is not divisible by both 5 & 7 \n");
    }
  return 0;
}