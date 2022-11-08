/*
Program 15 : Binary and Sequential search
Done by : Atharv J
Date: 10/08/2021
*/

#include <stdio.h>
int bSearch (int array[], int size, int num);
int sSearch (int array[], int size, int num);

int i;
int main ()
{
  int array[100];
  int size, option, num, pos, j, temp;

  printf ("Enter the number of elements in the array: ");
  scanf ("%d", &size);

  printf ("Enter the elements in ascending order : ");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &array[i]);
    }

  printf ("\nEnter the number required to search: ");
  scanf ("%d", &num);

  printf ("\nEnter the serach want to perform :\n 1.Binary Search\n 2.Sequential Search \n");
  scanf ("%d", &option);
  switch (option)
    {
    case 1:
      pos = bSearch (array, size, num);
      if (pos == -1)
	{
	  printf ("\n Number is not found");
	}
      else
	{
	  printf ("\n Number is found at the position %d.", (pos + 1));
	}
      break;
    case 2:
      pos = sSearch (array, size, num);
      if (pos == -1)
	{
	  printf ("\n Number is not found");
	}
      else
	{
	  printf ("\n Number is found at the position %d.", (pos + 1));
	}
      break;
    default:
      printf ("\n Invalid Option");
      break;
    }
  return 0;
}

int bSearch (int array[], int size, int num)
{
  int f, l, mid;
  f = 0;
  l = size - 1;
  while (f <= l)
    {
      mid = (f + l) / 2;
      if (array[mid] == num)
	{
	  return mid;
	}
      else if (num < array[mid])
	{
	  l = mid - 1;
	}
      else
	{
	  f = mid + 1;
	}
    }
  return -1;
}

int sSearch (int array[], int size, int num)
{
  for (i = 0; i < size; i++)
    {
      if (array[i] == num)
	{
	  return i;
	}
    }
  return -1;
}


