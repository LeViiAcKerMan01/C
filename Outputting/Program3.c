/*  MULTIPLE OUTPUTS

We can add as many printf() statements as we want.
Write a program that does the following

# Output: 3 + 4
# Output: 2 + 1

Note - Notice that in the output they are printed together without any space between them.
*/
#include <stdio.h>

int main() {
  printf("%d", 3 + 4 );
  printf("%d", 2 + 1);
  return 0;
}