#include "3-calc.h"
/**
 * op_add - prototype function
 *Description: a function that returns the sum of a and b.
 * @a: input integer
 * @b: input integer
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - prototype function
 *Description: a function that returns the difference of a and b.
 * @a: input integer
 * @b: input integer
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - prototype function
 *Description: a function that returns the product of a and b.
 * @a: input integer
 * @b: input integer
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - prototype function
 *Description: returns the quotient of a and b.
 * @a: input integer
 * @b: input integer
 * Return: divident of a and b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
return (a / b);
}
/**
 * op_mod - prototype function
 *Description: returns the remainder of a and b.
 * @a: input integer
 * @b: input integer
 * Return: remainder of a and b.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
return (a % b);
}
