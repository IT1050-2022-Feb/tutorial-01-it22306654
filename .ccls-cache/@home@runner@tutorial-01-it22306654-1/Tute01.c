/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>
int main(void) {
  float sub1, sub2, avg;

  printf("Enter the marks of 1 st subject :");
  scanf("%f", &sub1);

  printf("Enter the marks of 2 nd subject :");
  scanf("%f", &sub2);

  avg = (sub1 + sub2) / 2.0;

  printf("Average mark is :%.2f", avg);

  return 0;
}
