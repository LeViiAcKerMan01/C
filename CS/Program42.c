/*  PROBLEMS ON CONDITIONAL STATEMENTS


Write a program that does the following

# Make an auto-reply program that takes input from the user as an integer variable x
# Do the above for 2 separate input values 
   # x = 69
   # x = 70

# Compute and output the following to the console
   # Print "Order Confirmed" only if x < 70
   # else Print "Order Limit reached"
   # In both cases, the program must print "Thank YOU!" on a separate line.

Input
69
70

Output
Order Confirmed
Thank YOU!
Order Limit reached
Thank YOU!

*/
#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  if (x < 70) {
    printf("Order Confirmed \n");
    }  
    else {
    printf("Order Limit reached \n");
    }
    printf("Thank YOU!\n");
   

  scanf("%d", &x);
  if (x < 70) {
    printf("Order Confirmed \n");
    }  
    else {
    printf("Order Limit reached \n");
    }
    printf("Thank YOU!");
   
  return 0;
}
