#include "main.h"
/**
 *_puts_recursion - prototype function
 *Description: prints a string + new line
 *@s: string to print
 *Return: void
 */
void _puts_recursion(char *s)
{
char *temp = s;
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(++temp);
}
else
{
_putchar('\n');
}
}
