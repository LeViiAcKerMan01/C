/*  USER INPUT LOOP


Let us change the problem a bit.

Write a program that does the following

# Declare a variable num and store a user-defined input from the console in it
# Declare a variable a and initialise it to 0
# Use the syntax above to create a loop, output the following to the console
   # Print a in separate lines as long as it is less than num.
   # Increment a by 1 in each iteration.

Input
10

Output
0 
1 
2 
3 
4 
5 
6 
7 
8 
9 

*/
#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int a = 0;
  while (a < num ) {
    printf("%d \n", a);
    a = a+1;
  }
  return 0;
}
