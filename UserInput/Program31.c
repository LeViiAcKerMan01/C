/*  HELLO USER

Write a program that does the following

# Declare a string variable x
# Accept a text user input - the name of the user - and store it in the variable x
# Output and print to the console "Hello" before the user-defined name.
# Remember to add a space between "Hello" and x

Note - To read an array of strings we use "%s" format specifier.


Input
Chef

Output
Hello Chef
*/
#include <stdio.h>

int main() {
  char x[10];
  scanf("%s", &x);
  printf("Hello ");
  printf("%s", x);
  return 0;
}