#include "main.h"
/**
 *_print_rev_recursion - prototype function
 *Description: prints a string in reverse
 *@s: string to print
 *Return: void
 */
void _print_rev_recursion(char *s)
{
char *temp = s;
if (*s != '\0')
{
_print_rev_recursion(++temp);
_putchar(*s);
}
}
