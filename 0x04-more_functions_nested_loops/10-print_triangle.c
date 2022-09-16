#include "main.h"
/**
 *print_triangle - prototype function
 *@size: size of triangle to print
 *Description: prints triangle in terminal
 *Return: void
 */
void print_triangle(int size)
{
int row, col, i;
i = size - 1;
if (size > 0)
{
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
if (col < i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
i--;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
