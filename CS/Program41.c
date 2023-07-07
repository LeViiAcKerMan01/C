/*  OR STATEMENT

'||' can be used to insert the 'or' condition in a C code.

Write a program that does the following

# Take input from the console for integer variables z, x and c.
# Do the above for 2 separate input tuples
   z = 5, x = 3, c = 2
   z = 3, x = 5, c = 8
# Compute and output the following for each tuple z, x and c
   # "PASS" if c is greater than either x or z
   # Otherwise print "FAIL" in every other case

Input
5 3 2
3 5 8

Output
FAIL
PASS
*/

#include <stdio.h>

int main() {
  int z;
  int x;
  int c;
  scanf("%d", &z);
  scanf("%d", &x);
  scanf("%d", &c);
  if (c > x || c > z ) {
    printf("PASS \n");
    }  
    else {
    printf("FAIL \n");
    }

  scanf("%d", &z);
  scanf("%d", &x);
  scanf("%d", &c);
  if (c > x || c > z ) {
    printf("PASS \n");
    }  
    else {
    printf("FAIL \n");
    }
  return 0;
}