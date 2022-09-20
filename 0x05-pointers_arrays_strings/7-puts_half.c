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
int i;
i = 0;
size = 0;
while (s[size] != '\0')
{
size++;
}
if ((size - 1) % 2 == 0)
{
i = size / 2;
}
else
{
i = (size + 1) / 2;
}
while (i < size)
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
