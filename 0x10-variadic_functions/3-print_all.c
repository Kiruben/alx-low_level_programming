#include "variadic_functions.h"
/**
 *print_all - prototype function
 *Description: prints anything
 *@format: format to print
 *Return: void
 */
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0, j = 0;
char *str;
char *separators = "cifs";
va_start(ap, format);
while (format[i] && format != NULL)
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", (float) va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char*);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}
while (separators[j])
{
if (format[i] == separators[j] && format[(i + 1)] != '\0')
printf(", ");
j++;
}
i++;
j = 0;
}
printf("\n");
va_end(ap);
}
