#include "main.h"
#include <stdlib.h>

/**
 * _calloc - prototype function
 *Description: A function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int count = 0;
char *array;
if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(nmemb * size);
if (array == NULL)
return (NULL);
for (; count < nmemb * size; count++)
*(array + count) = 0;
return (array);
}
