#include "main.h"
/**
 *print_diagonal - prototype function
 *@n: number of times character is printed
 *Description: prints a diagonal line in terminal
 *Return: void
 */
void print_diagonal(int n)
{
int row, spaces;
if (n > 0)
{
for (row = 0; row < n; row++)
{
for (spaces = 0; spaces < row; spaces++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
