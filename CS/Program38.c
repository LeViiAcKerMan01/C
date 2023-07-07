/*  ELSE STATEMENT

The 'else' keyword includes anything which isn't included in the previous conditions.

Write a program that does the following

# Create integer variables r and k - the weight of friends Ram and Karan
# Initialise r and k as r = 24 and k = 32
# Compute and output the following to the console
   # "Ram is heavier than Karan" if r is greater than k
   # "Karan is heavier than Ram" if r is lesser than k
   # "Ram & Karan have the same weight!" for any remaining conditions.

# Update the values of r and k as r = 78 and k = 78
# Compute and output the following to the console
   # "Ram is heavier than Karan" if r is greater than k
   # "Karan is heavier than Ram" if r is lesser than k
   # "Ram & Karan have the same weight!" for any remaining conditions.
*/
int main() {
  int r;
  int k;
  r = 24;
  k = 32;
  if (r > k) {
    printf("Ram is heavier than Karan. \n");
   } else if ( r < k) {
     printf("Karan is heavier than Ram \n");
   }
    else {
      printf("Ram & Karan have the same weight! \n");
   }
  r = 78;
  k = 78;
  if (r > k) {
    printf("Ram is heavier than Karan. \n");
   } else if ( r < k) {
     printf("Karan is heavier than Ram \n");
   }
    else {
      printf("Ram & Karan have the same weight! \n");
   }
  return 0;
}