#include "main.h"
/**
 *print_rev - prototype function
 *@s: string to print in reverse
 *Decription: prints string in reverse
 *Return: void
 */
void print_rev(char *s)
{
int size;
size = 0;
while (s[size] != '\0')
{
size++;
}
 while (size)
{
_putchar(s[--size]);
}
_putchar('\n');
}
