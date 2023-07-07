/*

In programming, you often need to know if something is true or false.
For this, we can have variables containing just one of these two values - True or False.
When the value is returned or printed, true = 1 and false = 0.
These variables are called "bool" or "boolean variables".
We will look at applications of these in later modules. Note - In C, 
the bool data type is not a built-in type, it is a macro defined in stdbool.h header file. 
So the program will not compile as is. To fix this issue, you need to include the stdbool.h 
header file at the top of your code:

Write a program that does the following

# For now, declare two variables x and y
# Assign the value true to x and the value false to y
# Output x and y to the console on separate lines

Note: We are not using any quotes around true and false.
Also, they have to be in lowercase alphabets.
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
  bool x = true ;
  bool y = false ;
  printf("%d \n", x ); 
    printf("%d \n", y ); 
  return 0;
}