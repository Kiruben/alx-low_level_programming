#include "main.h"
/**
 *puts2 - prototype funtcion
 *@s: string to be evaluated
 *Description: prints every other charater of s
 *Return: void
 */
void puts2(char *s)
{
int size;
int i;
i = 0;
size = 0;
while (s[size] != '\0')
{
size++;
}
while (i < size)
{
_putchar(s[i]);
i += 2;
}
_putchar('\n');
}
