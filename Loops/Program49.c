/*  FACTORIAL OF ANY NUMBER

Write a program that does the following

Declare an integer variable num and initialise it to a user defined input
Output to the console the factorial of num
Remember to use 'loops' for this problem
Factorial of a number(n) = n×(n−1)×...2×1

Input
7

Output
The factorial of the given number is: 5040 
*/
#include <stdio.h>

int main() {
    int num;
    int fact = 1;
    scanf("%d", &num);
    for(int a = 1; a <= num; a = a + 1)
    {
        fact = fact*a;
    }
    printf("The factorial of the given number is: %d \n",fact);
    return 0;
}
