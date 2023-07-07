/*  CURLY BRACES

You might have noticed the '{' before and after printf in the previous problem.
This '{' is what is known as a curly bracket.

C relies on curly braces ('{' in the beginning and '}' at the end) to define the scope of the code.
Other programming languages often use whitespaces for this purpose.

Run this code to identify the compilation error.
Fix the curly braces to solve the problem.
*/

//Solution as follows

#include <stdio.h>

int main() {
  int Age = 25 ;
  int Vage = 18;

  if (Age < Vage) {
    printf("Not old enough to vote.\n");
    printf("Wait for "); 
    printf("%d years"), (Vage - Age);
    } else {
    printf("Old enough to vote!");
    }
  return 0;
}