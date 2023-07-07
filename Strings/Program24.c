/*  CONCATENATION

C also has many useful string functions, which can be used to perform certain operations on strings.
To use them, you must include the header file in your program.
To concatenate (combine) two strings, you can use the strcat() function:

# strcat(a, b) stores the concatenated string in string a
# Note - the size of the first string should be large enough to store the result of the two strings combined(20 in our example) that is why it is important to declare the size of the first string.
Note: You can add spaces between words by using an empty " " with a space inside or by providing a space in the end of a word.
For eg -
char a[20] = "Good ";
char b[] = Work
strcat(a, b);
printf(%s, a);
output = Good Work

Task

Write a program that does the following

Declare two variables x and y
Assign the values "Hello " and "World!" to x and y respectively
Output "Hello World!" to the console by concatenating the strings x and y
*/
#include <stdio.h>

int main() {
  char x[30] = "Hello ";
  char y[] = "World!";
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(x, y);
  
  // Print str1
  printf("%s", x);
 
  return 0;
}