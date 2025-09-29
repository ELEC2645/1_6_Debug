/*
 * ELEC2645 Unit 1.2 Activity 6 - Debug Practice
 * This program prompts the user to enter an integer less than 100.
 * It then calculates and displays the sum and average of all integers from 1 up to the entered number.
 * If the user enters a number 100 or greater, it asks for a smaller number.
 */

#include <stdio.h>

int main() {

   int n =0;

   int sum =0;
   float ave = 0.0;

   // prompt user for input integer
   print("Enter a number :");
      
   scanf("%d",n);

   // check input is within limits - && must be used for logical AND ie. both conditions must be true
   if (n <= 100 && n > 0)
   {
      // loop from 1 to n, adding each value to sum and printing value
      printf("Numbers in sequence :");
      for (int i=1 ;i <= n; i++)
      {
         sum = sum + i
         printf("%d ",i);
      }

      //calculate average - cast sum to float to avoid integer division
      // what would happen if we didn't do this and just wrote sum/n ?
      average = (float) sum / n;

      printf("\nSum : %f, Ave : %f\n",sum,ave);

   }
   else
   {
      // tell user input was out of range
      printf("\nEnter a number between 1 and 99\n");
   }


}
