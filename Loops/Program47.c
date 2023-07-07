/*  FOR LOOP


When you know exactly how many times you want to loop through a block of code, use the 'for' loop instead of a 'while' loop:

Syntax = for (statement 1; statement 2; statement 3) {
        // code block to be executed
        }
Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.

Example
    for (int i = 0; i < 5; i++) 
      printf("%d \n", i);
    }
The code above does the following. The output will be numbers starting from 0 and ending at 4

# defines the value of i
# then provides the condition
# then tells the increment

Write a program that does the following

# Initialise a variable n and accept a user-defined input from the console
# Output "C" to the console n number of times.

*/
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0 ; i < n ; i = i + 1) {
    printf("C \n");
  }
  return 0;
}