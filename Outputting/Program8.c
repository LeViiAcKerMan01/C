/* INSERTING SPACE BETWEEN OUTPUTS

You can also have multiple outputs together in a single "printf()" command.

 for eg - printf("%d %d", 12 , 11)
Write a program that does the following

# Output: 3 + 4
# Output: 2 + 1 in a single line with a space between them using the syntax suggested above.
*/
#include <stdio.h>

int main() {
  printf("%d %d", 3+4 , 2 + 1 );
  return 0;
}