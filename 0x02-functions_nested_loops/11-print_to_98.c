#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prototype function
 *@n: start count at n
 *Decription: prints numbers from n to 99
 *Return: none
 */
void print_to_98(int n)
{
int i, j;
if (n <= 98)
{
for (i = n; i <= 98 ; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
printf("\n");
}
else
{
for (j = n ; j >= 98; j--)
{
printf("%d", j);
if (j != 98)
{
printf(", ");
}
}
printf("\n");
}
}
