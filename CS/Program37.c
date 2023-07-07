/*  ELSE IF STATEMENT


The 'else if' keyword means "if the previous conditions were not true, then try this condition"

Write a program which does the following

# Create integer variables b and r - the marks scored by Bob and Rob
# Initialise b and r as b = 23 and r = 45
# Compute and output the following to the console
   # "Rob Scored higher marks than Bob" if r is greater than b
   # "Bob & Rob both scored the same" if both b and r are equal

# Update the values of b and r as b = 15 and r = 15

# Compute and output the following to the console
   # "Rob Scored higher marks than Bob" if r is greater than b
   # "Bob & Rob both scored the same" if both b and r are equal

*/
#include <stdio.h>

int main() {
  int r ;
  int b ;
  r = 45;
  b = 23;
  if ( r > b ) {
    printf("Rob Scored higher marks than Bob. \n");
   } else if ( r == b) {
     printf("Bob & Rob both scored the same");
   }
   r = 15;
   b = 15;
  if ( r > b ) {
    printf("Rob Scored higher marks than Bob. \n");
   } else if ( r == b) {
     printf("Bob & Rob both scored the same");
   }
  return 0;
}