// PHYS-305 Lecture 5
// This program performs the multiplication of two 3x3 matrix
// Author: Maxwell Cui

#include<stdio.h>

int main()
{
  // Declare and initialize two 3x3 matricies
  float A[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  float B[3][3]={
    {9,8,7},
    {6,5,4},
    {3,2,1}
  };
  
  // Declare a matrix to store the product and initialize to 0
  float matrix_product[3][3];
  for(int k=0;k<3;k++)
    {
      for(int l=0;l<3;l++)
	{
	  matrix_product[k][l]=0;
	}
    }

  // Calculate the production
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
	{
	  // In the case of A multiply B, the row of A and the column of B are fixed
	  //
	  matrix_product[i][j]=A[i][0]*B[0][j]+A[i][1]*B[1][j]+A[i][2]*B[2][j];
	}
    }

  // Create a test matrix that hold the correct values of the multiplication
  float test_matrix[3][3]={
    {30,24,18},
    {84,69,54},
    {138,114,90}
  };

  // Print the product matrix in a
  //
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
	{
	  if(matrix_product[i][j]==test_matrix[i][j])       // Check if the result is correct
	    {
	      printf("%0.2f\t", matrix_product[i][j]);      // Print the result if it's correct
	    }
	  else
	    {
	      printf("Error: the [%d][%d] term is wrong!\n",i,j);  // If it's wrong, print an error message and exit the program.
	      return 1;
	    }
	}
      printf("\n");
      if(i==2)
	printf("The result is correct!\n");
    }

  return 0;
}
