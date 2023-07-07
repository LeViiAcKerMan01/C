/*  CREATING A STRING

Strings are used for storing text.
Unlike many other programming languages, C does not have a String type to easily create string variables.
Instead, you must use the char type and create an array of characters to make a string in C.

 for eg - char stringname[] = "Hello Chef!";

Note that you have to use double quotes ("").

To output the string, you can use the printf() function together with the format specifier %s to tell C that we are now working with strings:

Write a program that does the following

# Create a string named fruit and assign the value "Apple" to it.
# Output fruit to the console.
*/
#include <stdio.h>

int main() {
  char fruit[] = "Apple";
  printf("%s", fruit );
 
  return 0;
}
