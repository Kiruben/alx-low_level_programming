#include "variadic_functions.h"
/**
 *sum_them_all -prototype function
 *Description - adds all parameters
 *@n: number of params
 *Return: summ of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
if (n != 0)
{
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
va_end(args);
}
return (sum);
}
