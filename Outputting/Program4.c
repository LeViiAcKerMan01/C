/* OUTPUTS IN SEPERATE LINES

We can use ""\n"" to insert new lines.

Write a program that does the following

# Output: 3 + 4
# Output: 2 + 1 in a separate line using the given command.

*/
#include <stdio.h>

int main() {
  printf("%d\n", 3 + 4 );
  printf("%d", 2 + 1);
  return 0;
}