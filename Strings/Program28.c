/*  STRING OPERATIONS

Let us finish this module with some more practice!

Write a program that does the following

# Declare a char variable
# Assign the value "String" to it
# And then print to the console the first 3 characters of the string.
# Do not include any space or new line.
# When you run the code, you will get a compilation error - go ahead and debug the code as well

Note - %c format specifier is used to output single characters.
*/
#include <stdio.h>

int main() {
  char var[] = "String";
  printf("%c", var[ 0 ]);
  printf("%c", var[ 1 ]);
  printf("%c", var[ 2 ]);
  return 0;
}