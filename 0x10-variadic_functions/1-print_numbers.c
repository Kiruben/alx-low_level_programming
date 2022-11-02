#include "variadic_functions.h"
/**
 *print_numbers - prototype function
 *Description: prints numbers from list
 *@separator: string to prints between numbers
 *@n: numbers of ints passed
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
if (separator == NULL)
{
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
}
va_end(ap);
printf("\n");
}
else
{
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != (n - 1))
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
}
