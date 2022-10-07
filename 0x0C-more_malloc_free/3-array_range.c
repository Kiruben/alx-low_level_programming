#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prototype function
 *Description: A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
int *array;
int size, count;
if (min > max)
return (NULL);
size = max - min;
array = malloc((size + 1) * sizeof(int));
if (array == NULL)
return (NULL);
for (count = 0; count <= size; count++)
array[count] = min++;
return (array);
}
