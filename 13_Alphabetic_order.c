/*
Program 13 : Names in Alphabetical order
Done by : Atharv J
Date: 27/07/2021
*/

#include <stdio.h>
#include <string.h>		
int main ()
{
  char names[100][100], temp[100];
  int size, i, j;

  printf ("Enter the number of Names:");
  scanf ("%d", &size);

  printf ("Enter the names one by one:");
  for (i = 0; i < size; i++)
    {
      scanf ("%s", names[i]);
    }

  printf ("\n Entered Names are :");
  for (i = 0; i < size; i++)
    {
      printf ("\t%s", names[i]);
    }

  for (i = 0; i < size - 1; i++)
    {
      for (j = i + 1; j < size; j++)
	{
	  if (strcmp (names[i], names[j]) > 0)
	    {
	      strcpy (temp, names[i]);
	      strcpy (names[i], names[j]);
	      strcpy (names[j], temp);
	    }
	}
    }
  printf ("\n Names after sorted :");
  for (i = 0; i < size; i++)
    {
      printf ("\t%s", names[i]);
    }
  return 0;
}
