/*  INDEX AND PRINTING SPECIFIC ELEMENT OF AN ARRAY

You access an array element by referring to the index number inside square brackets [].

                          0    1     2    - index numbers
     for eg - num[ 3 ] = {1 , 100 , 200};
             printf(%d), num[ 1 ];
             output = 100  
Note - Indexing always starts from 0 starting from left to right.

Write a program which does the following

# Output the 3rd element from the left in the given array - num - to the console.
*/
#include <stdio.h>

int main() {
  int num[] = {1,2,3,4,5 };
  printf("%d", num[ 2 ]);
 
  return 0;
}