/*
Program 6 : Prime numbers in a given range
Done by : Atharv J
Date: 13/07/2021
*/
#include<stdio.h>
int main ()
{
  int i, prime, up, low, n;
  printf ("Enter the lower limit : ");
  scanf ("%d", &low);
  printf ("Enter the upper limit : ");
  scanf ("%d", &up);
  if (low >= 2)
    {
      printf ("Prime numbers are : ");
      for (n = low; n <= up; n++)
	{
	  prime = 1;
	  for (i = 2; i <= n / 2; i++)
	    {
	      if (n % i == 0)
		{
		  prime = 0;
		  break;
		}
	    }
	  if (prime == 1)
	    printf ("\t %d", n);
	}
    }
  else
    {
      printf ("Enter lower number must be greater than 1");
    }
}

