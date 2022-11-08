/*
Program 11 : Matrix addition and multiplication
Done by : Atharv J
Date: 20/07/2021
*/
#include<stdio.h>

int main ()
{
  int firstMx[10][10], secondMx[10][10], resMx[10][10];
  int sum=0;
  int i, j, k, mxSize, rowM1, rowM2, colM1, colM2, row, col;

  printf ("Enter the row and column size of first matrix matrix:");
  scanf ("%d%d", &rowM1, &colM1);
  printf ("Enter the row and column size of second matrix matrix:");
  scanf ("%d%d", &rowM2, &colM2);

  printf ("Enter the elements of first matrix:");
  for (i = 0; i < rowM1; i++)
    {
      for (j = 0; j < colM1; j++)
	{
	  scanf ("%d", &firstMx[i][j]);
	}
    }
  printf ("Enter the elements of second matrix:");
  for (i = 0; i < rowM2; i++)
    {
      for (j = 0; j < colM2; j++)
	{
	  scanf ("%d", &secondMx[i][j]);
	}
    }
  printf ("elements of first matrix are:\n");
  for (i = 0; i < rowM1; i++)
    {
      for (j = 0; j < colM1; j++)
	{
	  printf ("\t%d", firstMx[i][j]);
	}
      printf ("\n");
    }
  printf ("elements of second matrix are:\n");
  for (i = 0; i < rowM2; i++)
    {
      for (j = 0; j < colM2; j++)
	{
	  printf ("\t%d", secondMx[i][j]);
	}
      printf ("\n");
    }
      if (rowM1 == rowM2 && colM1 == colM2)
	{
	  printf ("elements of after adding the matrices are:\n");
	  for (i = 0; i < rowM1; i++)
	    {
	      for (j = 0; j < colM1; j++)
		{
		  resMx[i][j] = (firstMx[i][j] + secondMx[i][j]);
		  printf ("\t%d", resMx[i][j]);
		}
	      printf ("\n");
	    }


	}
      else
	{
	  printf ("\n addition not possible\n");
	}
      if (colM1 == rowM2)
	{

	  for (i = 0; i < rowM1; i++)
	    {
	      for (j = 0; j < colM2; j++)
		{

		  for (k = 0; k < colM1; k++)
		    {
		      sum += firstMx[i][k] * secondMx[k][j];
		    }

		  resMx[i][j] = sum;
		  sum = 0;

		}
	    }
	  printf ("\n resultant matrix after multiplication is : \n");
	  for (i = 0; i < rowM1; i++)
	    {
	      for (j = 0; j < colM2; j++)
		{
		  printf ("\t%d", resMx[i][j]);
		}
	      printf ("\n");
	    }

	}
      else
	{
	  printf (" \nmultiplication not possible\n");
	}

      return 0;
    }

