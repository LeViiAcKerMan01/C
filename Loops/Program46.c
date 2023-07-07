/*  DO WHILE LOOP


The do/while loop is a type of while loop.
This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

Write a program that does the following

# Declare an integer variable i and initialise it to 0
# Use the do/while loop to output i to the console as 
  long as i is less than 6.

*/
#include <stdio.h>

int main() {
  int i = 0;
  do {
    printf("%d \n", i);
    i = i+1;
  }
  while (i < 6);
  return 0;
}
