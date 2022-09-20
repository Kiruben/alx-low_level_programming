#include "main.h"
/**
 *puts_half - prototype function
 *@s: string to be evaluated
 *Description: prints half of the string
 *Return: void
 */
void puts_half(char *s)
{
int size;
int half_size;
size = 0;
while (s[size] != '\0')
{
size++;
}
if ((size - 1) % 2 == 0)
{
half_size = 0;
size = (size + 1) / 2;
while (half_size < size)
{
_putchar(s[half_size]);
half_size++;
}
}
else
{
half_size = size / 2;
while (half_size < size)
{
_putchar(s[half_size]);
half_size++;
}
}
_putchar('\n');
}
