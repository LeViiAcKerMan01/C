/*  INTRODUCTION
Welcome to the 1st module on Learn C syntax. Some important points

> This learning path is geared to take you on the journey towards solving programming problems.
  The learning modules and content has been finalised based on the above goal.
> At the end of this learning path, you will be able to understand and interpret codes written in C
> Please feel free to give us your feedback for each problem / solution / module.
  Help us get better.

  Your mission if you choose to accept it!

  Let us write your first code using C programming.
The code in the IDE prints 13 on the screen when you run it.
Go ahead and try it out - Click on Submit to start your Learn C Journey.

C has a few lines of code which we write in almost all programs.
These are the first 4 lines and last 2 lines that you see in the program to your right. (Ignore what those lines mean - we will explain them later.)

# What matters for now is just Line 4:
"printf()"
 This is what we use to output/print anything to the screen.
# Note: Every C statement ends with a semicolon (;)
# Note: %d is called a format specifier. In C Programming values can be of type integer, floating-point, single character, or sequence of characters. We use format specifiers in C to display values of a variable of a different type.
*/
#include <stdio.h>

int main() {
  printf("%d",13);
  return 0;
}