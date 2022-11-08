/*
Program 12 : String Functions
Done by : Atharv J
Date: 27/07/2021
*/

#include<stdio.h>
void main ()
{
  char a[50], b[50], c[50], s1[10], s2[10], s3[10], s4[10], temp =0;
  int j, i, n = 0;
  printf ("Enter the string to find the length : ");
  scanf ("%s", a);
  while (a[n] != '\0')
    {
      n++;
    }
  printf ("The length of the string is :%d", n);
  printf ("\nEnter the string to copied :");
  scanf ("%s", b);
  for (i = 0; b[i] != '\0'; i++)
    {
      c[i] = b[i];
    }
  c[i] = '\0';

  printf ("The copied string is: %s", c);
  
  printf ("\nConcatenation\nEnter the first string : ");
  scanf ("%s", s1);
  printf ("Enter the second string : ");
  scanf ("%s", s2);
  
  for (i = 0; s1[i] != '\0'; i++);

  for (int j = 0; s2[j] != '\0'; j++)
    {
      s1[i] = s2[j];
      i++;
    }
  s1[i] = '\0';
  
  printf ("After concatenation : %s\n", s1);
  
  printf ("Comparing\nEnter the 1 st string : ");
  scanf ("%s", s3);
  printf ("Enter the 2 nd string : ");
  scanf ("%s", s4);
  for (i = 0; s3[i] != '\0'; i++)
    {
      if (s3[i] == s4[i])
	temp = 1;
      else
	temp = 0;
    }

  if (temp == 1)
    printf ("Both strings are same.");
  else
    printf ("Both strings are not same.");

}

