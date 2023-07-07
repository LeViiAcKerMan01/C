/*  STRINGS AND INTEGERS

We can use the strlen() function to get the length of a string.
For eg.

char s[] = "hello";
printf("%d", strlen(s)); // a now stores the length of s.
Write a program that does the following

# Create a variable txt and assign it the text "NumeroTres"
# Use the length() function to output to the console the number of characters in txt
*/
#include <stdio.h>
 
int main() {
  char txt[] = "NumeroTres";
  printf("%d", strlen(txt));
  return 0;
}