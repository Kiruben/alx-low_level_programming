#include <unistd.h>
/**
 *_putchar - entry point
 *c - represents character to print
 *Description - prints "_putchar"
 *Return: Always 0 (success)
 */
int _putchar (char c)
{
return (write(0, &c, 1));
}
