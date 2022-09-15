#include "main.h"
/**
 *print_line - prototype function
 *@n: number of lines to print
 *Decription: prints a line in terminal
 *Return: void
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0 ; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
