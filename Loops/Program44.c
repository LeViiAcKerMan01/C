/*  WHILE LOOP


Loops can execute a block of code as long as a specified condition is reached.
They are handy because they save time, reduce errors, and they make code more readable.
The while loop loops through a block of code as long as a specified condition is true:

Syntax - while (condition) {
             // code to be executed
         }

Write a program that does the following

# Declare a variable a and initialise it to 0
# Use the syntax above to create a loop, output the following to the console
   # Print a in separate lines as long as it is less than 7.
   # Increment a by 1 in each iteration.
*/
#include <stdio.h>

int main() {
  int a = 0;
  while (a < 7 ) {
    printf("%d \n", a);
    a = a+1;
  }
  return 0;
}

