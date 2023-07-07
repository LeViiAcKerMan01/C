/*  DECLARING A VARIABLE

The box we discussed in the previous problem is what is known as a Variable in C.
And the number that we put inside that box is called the 'Value' of the variable.

When we create a box, we should also specify what Type of box it is.

# If it is an "int" box, then you can only place integers inside it. You cannot place 3.5 into it.
# For that, you will need to specify that you are going to place decimal values inside it while creating the box, which would make it a "double" box. These are called Data Types.
  
  These are the various main types in C:

# int - stores integers (whole numbers), without decimals, such as 123 or -123
# double - stores floating point numbers, with decimals, such as 19.99 or -19.99
# char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
# bool - stores values with two states: true or false
# Variables can be given different values and later on can be modified too.

Write a program that does the following

# Create an int variable named Number
# Assign the value 19 to Number
# Use the printf command to output the value of Number to the console.
*/
#include <stdio.h>

int main() {
  int Number = 19 ;
  printf("%d", Number );
  return 0;
}