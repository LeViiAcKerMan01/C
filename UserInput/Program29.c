/*  TAKING USER INPUT


You have already learned that printf() is used to output (print) values.
Now we will use scanf() to get user input.

scanf() is a predefined variable that reads data from the keyboard or console,

# printf(). Used for output
# scanf(). Used for input

Write a program that does the following

# Declare an integer variable a
# Try taking a number from the console and assigning it to a
# Output a to the console
*/
#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  printf("Your number is: %d", a);

  return 0;
}