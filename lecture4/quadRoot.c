// PHYS-305 Lecture 4
// This program solves for the roots of a given quadratic function
// Author: Maxwell Cui

#include<stdio.h>
#include<math.h>

int main()
{
  // Declare variables to store the three coefficients
  // and initialize to 0
  float a,b,c;
  a=0.0;
  b=0.0;
  c=0.0;

  // Ask the user to enter the number for the three coefficients
  printf("Please enter the number for coefficient a: ");
  scanf("%f",&a);

  printf("Please enter the number for coefficient b: ");
  scanf("%f",&b);

  printf("Please enter the number for coefficient c: ");
  scanf("%f",&c);

  // Print the entered values for the three coefficients
  printf("a is %f\nb is %f\nc is %f\n",a,b,c);

  // Calculate discriminant
  float delta;
  delta=b*b-4*a*c;

  // Add 0.2 between %f to control the number of digits after the decimal point
  if(delta>0)
    {
      float x1, x2;
      x1=(-b+sqrt(delta))/(2*a);
      x2=(-b-sqrt(delta))/(2*a);
      printf("There are two different real roots: %0.2f and %0.2f\n",x1,x2);
    }
  else if(delta==0)
    {
      float x;
      x=(-b+sqrt(delta))/(2*a);
      printf("There are two identical roots: %0.2f\n",x);
    }
  else
    {
      float realPart, imaginaryPart;
      realPart=-b/(2*a);
      imaginaryPart=sqrt(fabs(delta))/(2*a);
      printf("There are two different complex solutions: %0.2f+i*%0.2f and %0.2f-i*%0.2f\n",realPart,imaginaryPart,realPart,imaginaryPart);
    }
  
  return 0;
}
