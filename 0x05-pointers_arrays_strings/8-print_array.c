#include "main.h"
#include <stdio.h>
/**
 *print_array - prototype function
 *@a: array to be printed
 *@n: number of elements to be printed
 *Description: prints array to the nth element
 *Return: void
 */
void print_array(int *a, int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      if((i + 1) != n)
	{
      printf("%d, ",a[i]);
	}
      else
	{
	  printf("%d",a[i]);
	}
    }
 putchar('\n');
}
