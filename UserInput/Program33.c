/*  MILE TO KILOMETER CONVERTOR

Write a program that does the following

# Create a Convertor that converts miles into kilometers.(1 Mile = 1.60 KM)
# Create integer variables mile and km
# Accept user input and store it in mile
# Compute and output distance in kilometres - km to the console

Input
106

Output
169.60 Kilometers
*/
#include <stdio.h>

int main() {
  double km;
  int mile;
  scanf("%d", &mile);
  km = 1.60 * mile ;  
  printf("%0.2f Kilometers", km  );
  return 0;
}