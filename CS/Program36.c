/*  IF STATEMENT

An "if statement" is written by using the 'if' keyword.

Write a program that does the following

# Take input for two integer variables a & b
# Output "Coding is Fun!" to the console if a is greater than b.

Input
25
20

Output
Coding is Fun!
*/
#include <stdio.h>

int main() {
  int a ;
  int b ;
  scanf("%d", &a) ;
  scanf("%d", &b) ;
  if ( a > b ) {
    printf("Coding is Fun!");
  }
  return 0;
}