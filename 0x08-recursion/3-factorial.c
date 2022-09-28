#include "main.h"
/**
 *factorial - prototype function
 *Description: returns factorial of given number
 *@n: number to find factorial of
 *Return: factorial of given number, 1 if 0
 *-1 if lower than 0
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
if (n != 1)
{
return (n * factorial(n - 1));
}
else
{
return (1);
}
}
}
