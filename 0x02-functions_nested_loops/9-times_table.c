#include "main.h"
/**
 *times_table - prototype function
 *Description: prints the 9 times table
 *Return: none
 */
void times_table(void)
{
int row, col, multiple;
for (row = 0; row <= 9; row++)
{
for (col = 0 ; col <= 9; col++)
{
multiple = row * col;
if ((multiple / 10) == 0)
{
if (col != 0)
{
_putchar(' ');
}
_putchar(multiple + '0');
if (col != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar((multiple / 10) + '0');
_putchar((multiple % 10) + '0');
if (col != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
