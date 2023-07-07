/*  BREAK STATEMENT


You have already seen the 'break' statement used in an earlier module of this learning path.
It was used to "jump out" of a switch statement.
The 'break' statement can also be used to jump out of a loop.

Write a program that does the following

Initialise an integer variable i to 0
Output to the console i from 0 to 15 using a for loop
Stop execution when the value of i reaches 13
*/
#include <stdio.h>

int main() {
  for (int i = 0; i <= 15 ; i = i+1) {
    if (i == 13 ) {
      break ;
    }
    printf("%d \n", i);
  } 
  return 0;
}