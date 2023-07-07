/*  STORING BOXES

Suppose we now want to find the area and perimeter of a rectangle that has length = 11 and width = 13.
But now the width has changed from 13 to 15.
So we'll have to change that number in both - the equation of area and the equation of perimeter.
Instead of changing it in two places each time we change the width, won’t it be easier if we can change it just once?

For that, let's consider doing something like this:

# Let’s take a box, call it "width" and put the number 13 inside it.
# Similarly, let’s also take a box called "length" and put the number 11 inside it.
# Now, to find the area, we just take the numbers inside these two boxes and multiply them. That is, area = length * width.
# Similarly, to print the perimeter, we just do perimeter = 2 * (length + width)).

Now, if we want to change the width from 13 to 15, we just have to change the number inside that box, 
and nothing else. Both the formulas will now be correct since they take the value from the box.

In C, we should also tell what kind of stuff we are going to put into every box.

# Here, we are only going to put integers inside the box called "width".
# So we write
int width = 13;
# This means that the box called "width" will contains ints (ie. integers), and right now, we have put in the integer 13 into it. This is needed only when we name the box for the very first time.
# When we change the value inside the box later on, we'll just write
width = 15
# Note that we don't write "int" at the beginning here.
 Try updating the value of width from 13 to 15 in the given code and find the outputs.
*/

#include <stdio.h>

int main() {
  int length = 11;
  int width = 13;
  printf("%d \n", length * width);
  printf("%d \n", 2*(length+width));
  width = 15 ; //Replace the _ with the correct value.
  printf("%d \n", length * width);
  printf("%d", 2*(length+width));
  
  return 0;
}