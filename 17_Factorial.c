/*
Program 17 : Factorial of a given number
Done by : Atharv J
Date: 10/08/2021
*/

#include <stdio.h>

int factorial (int n);
int main ()
{
  int num, fact;

  printf ("Enter the number to find the factorial : ");
  scanf ("%d", &num);
  if (num == 0)
    {
      printf ("The factorial of zero = 1");
    }
  else
    {
      fact = factorial (num);
    }

  printf ("\n Factorial of given number is : %d", fact);
  return 0;
}

int factorial (int n)
{
//if the number is 1 return 1
  if (n == 1)
    {
      return 1;
    }
//otherwise return n*factorial(n-1)
  return n * factorial (n - 1);
}

