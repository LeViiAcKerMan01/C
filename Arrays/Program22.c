/*  DISPLAYING ELEMENTS

Write a program that does the following

# Create a string array - *week[] - for the following values "Monday", "Tuesday", "Wednesday", and "Thursday"
# Output the last two elements of the array on separate lines

  Note - we use %s format specifier to output strings.
*/
#include <stdio.h>

int main() {
  char *week[4] = {"Monday", "Tuesday", "Wednesday", "Thursday"};
  printf("%s \n", week[ 2 ]);
  printf("%s", week[ 3 ]);
 
  return 0;
}