/*
Program 16 : Fibonacci series using recursive function
Done by : Atharv J
Date: 10/08/2021
*/

#include <stdio.h>
//function for fibonacci
int fibonacci (int i)
{
  if (i < 2)
    {
      return i;
    }
//recursion
  return fibonacci (i - 1) + fibonacci (i - 2);
}

int main ()
{
  int i, n;

  printf ("Enter the number of terms : ");
  scanf ("%d", &n);

  printf ("Fibonacci series upto %d terms are :", n);
  for (i = 0; i < n; i++)
    {
      printf ("  %d", fibonacci (i));
    }
  return 0;
}
