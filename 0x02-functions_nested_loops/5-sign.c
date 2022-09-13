#include "main.h"
/**
 *print_sign - prototype function
 *@n: character to evaluate
 *Description: prints sign of number
 *Return: 1 if n greater than 0, 0 if n equals 0
 *-1 if n less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return ('/');
}
