/*  CONTINUE STATEMENT

The 'continue' statement skips one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

Write a program that does the following

Declare a variable 
�
n and set it to a user defined input
Output to the console a series of numbers from 0 to 12 with the following condition
Skip the number inserted by the user.
*/
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i <= 12; i=i+1) {
    if (i == n) {
      continue;
    }
   printf("%d \n", i);
  }   
  return 0;
}