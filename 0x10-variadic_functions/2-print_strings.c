#include "variadic_functions.h"
/**
 *print_strings - prototype function
 *Description: prints strings
 *@separator: string to separate strings
 *@n: number of strings
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
if (n == 0)
return;
else
{
va_list ap;
unsigned int i;
char *temp_string;
va_start(ap, n);
for (i = 0; i < n; i++)
{
temp_string = va_arg(ap, char*);
if (temp_string == NULL)
printf("(nil)");
else
printf("%s", temp_string);
if (separator != NULL && i < (n - 1))
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
}
