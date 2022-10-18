#include "3-calc.h"
/**
 * get_op_func - prototype function
 *Description: the function that selects the correct operation
 * to perform on the equation
 * @s: operator passed as argument
 * Return: a pointer to the function for the
 * operator given as a parameter.
 */
int(*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (*(ops[i]).op == *s && *(s + 1) == '\0')
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
