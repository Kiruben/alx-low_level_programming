#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - prototype function
 *Decription: A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: A pointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
void *temp_s;
temp_s = malloc(b);
if (temp_s == NULL)
exit(98);
return (temp_s);
}
