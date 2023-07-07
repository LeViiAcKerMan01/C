/*  CONDITIONS IN IF STATEMENTS


C supports the usual logical mathematical conditions:

# Equals: a == b
# Not Equals: a != b
# Less than: a < b
# Less than or equal to: a <= b
# Greater than: a > b
# Greater than or equal to: a >= b

Write a program which does the following

# Take input from the console for integer variables a, b and c.
# Do the above for 2 separate input tuples
   # a = 25, b = 21, c = 52
   # a = 35, b = 23, c = 34

# Compute and output the following for each tuple a, b and c
   # "Bravo!" if a is greater or equal to c
   # Otherwise print "Try again" in every other case

*/
#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a > c) {
    printf("Bravo! \n");
   } else {
     printf("Try Again \n");
   }
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a > c) {
    printf("Bravo! \n");
   } else {
    printf("Try Again \n");
   }
  return 0;
}