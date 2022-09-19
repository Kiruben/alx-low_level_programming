#include "main.h"
/**
 *_puts - prototype function
 *@str: string to print
 *Description: prints string to stdout
 *Return: void
 */
void _puts(char *str)
{
int i;
i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
