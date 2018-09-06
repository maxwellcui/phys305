// PHYS-305 Lecture 5
// This program calculates the sum of the convergent series 1/2^n
// Author: Maxwell Cui

#include<stdio.h>
#include<math.h>

int main()
{
  // Declare the variable of sum to hold the sum of the series and initialize it to 0
  float sum;
  sum=0;

  // Variable to hold the number of term.
  int n;
  n=0;

  // Declare a variable to hold the increment of the sum and initialize it to 0
  float inc;
  inc=0;

  do
    {
      inc=1/pow(2,n);      // Calculate the contribution for the n-th term
      sum+=inc;            // Update the sum
      n++;                 // Go to the next term
      
    }while(inc>0.000001);  //Continue to loop if it doesn't meet the accuracy requirement


  printf("The sum of the series is: %f\n",sum);

  return 0;
}

    
  
