/*  CHANGING THE ELEMENTS OF AN ARRAY

To change the value of a specific element, we can refer to the index number.
Note - = A string array is declared in this manner *str[]

for eg - char *str[4] = {"land","water","fire","air"}
Write a program that does the following

The 3rd month in the given list - mnts[] - is incorrect
Update the 3rd month in the given array with the correct one - "Mar"
Once the 3rd array element is updated, output the 3rd array element to the console
*/
#include <stdio.h>

int main() {
  char *mnts[4] = {"Jan", "Feb", " Dec", "Apr"};
  mnts[ 2 ] = "Mar";
  printf("%s", mnts[2]);
 
  return 0;
}