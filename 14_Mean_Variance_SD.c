/*
Program 14 : Mean,Variance and Standard deviation
Done by : Atharv J
Date: 27/07/2021
*/

#include <stdio.h>
#include <math.h>

float mean (int array[50], float n);
float variance (int array[50], int size, float n);
float SD (float n);

int i;
int main ()
{
  int num[50];
  int size;
  float means, vC, sD;

  printf ("Enter the size of numbers:");
  scanf ("%d", &size);

  printf ("Enter the numbers:");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &num[i]);
    }

  means = mean (num, size);
  printf ("Means = %f", means);

  vC = variance (num, size, means);
  printf ("\nVariance = %f", vC);

  sD = SD (vC);
  printf ("\nStandard Deviation = %f", sD);
}

float mean (int array[50], float n)
{
  float sum = 0;
  for (i = 0; i < n; i++)
    {
      sum += array[i];
    }
  return (sum / n);
}

float variance (int array[50], int size, float n)
{
  float sum = 0;
  for (i = 0; i < size; i++)
    {
      sum += pow ((array[i] - n), 2);
    }
  return (sum / (size - 1));
}

float SD (float n)
{
  return (sqrt (n));
}

