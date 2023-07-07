/*  TABLE OF ANY NUMBER


Write a program that does the following

Create a variable n and store the user-defined input from the console in n
Output to the console the multiplication table for n upto 10

Input
10

Output
10 x 1 = 10 
10 x 2 = 20 
10 x 3 = 30 
10 x 4 = 40 
10 x 5 = 50 
10 x 6 = 60 
10 x 7 = 70 
10 x 8 = 80 
10 x 9 = 90 
10 x 10 = 100 

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i = i+1) {
        printf("%d x %d = %d \n", n, i, n*i);
    }
  return 0;
}