/* CHANGING CHARACTERS IN A STRING

To change the value of a specific character in a string

# We refer to the index number

# We then use single quotes to declare the new value

for eg - char myString[] = "Chaf";
     myString[2] = 'e';
     //Now, the string is "Chef".

Write a program that does the following

# Initialise a string variable word and assign the value "Ocygen" to it.
# You now want to fix the typo in the given string.
# Use the syntax explained above to replace 'c' with 'x' in the variable word
# Output the updated word to console
*/
#include <stdio.h>

int main() {
  char word[] = "Ocygen";
  word[ 1 ] = 'x';
  printf("%s", word );

  return 0;
}