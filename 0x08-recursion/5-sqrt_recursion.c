#include "main.h"
/**
 *_sqrt_recursion - prototype function
 *Description: return natural square root of a number
 *@n: number to find square root of
 *Return: square root or -1 if no square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (isqrt(1, n));
}
/**
 *isqrt - prototype function
 *Description: finds square root
 *@k: previous value
 *@n: sqaure root
 *Return: sqaure root
 */
int isqrt(int k, int n)
{
if (k > n)
{
return (-1);
}
else if (k * k == n)
{
return (k);
}
return (isqrt(k + 1, n));
}
