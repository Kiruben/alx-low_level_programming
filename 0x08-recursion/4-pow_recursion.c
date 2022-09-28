#include "main.h"
/**
 *_pow_recursion - prototype function
 *Description: return power of x to y
 *@x: value to be raised by y
 *@y: value x is to be raised by
 *Return: power of x by y, -1 if y 0 or lower
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return (x);
}
}
