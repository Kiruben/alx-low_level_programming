#include "main.h"
/**
 *more_numbers - prototype function
 *Description: function that prints numbers from 0 to 14
 *10 times
 *Return: void
 */
void more_numbers(void)
{
int row;
int num;
for (row = 0; row < 10; row++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar(num / 10 + '0');
}
_putchar(num % 10 + '0');
}
_putchar('\n');
}
}
