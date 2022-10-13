#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prototype function
 *Description: function that prints a name.
 * @name: pointer to name to print
 * @f: function to print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *name))
{
if (name == NULL || f == NULL)
return;
f(name);
}
