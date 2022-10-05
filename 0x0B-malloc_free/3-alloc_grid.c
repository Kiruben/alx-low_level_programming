#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prototype function
 * Description:A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **temp_array, i = 0, j = 0;
if (width <= 0 || height <= 0)
return (NULL);
temp_array = (int **)malloc(sizeof(int *) * height);
if (temp_array == NULL)
{
free(*temp_array);
return (NULL);
}
for (; i < height; i++)
{
temp_array[i] = (int *)malloc(sizeof(int) * width);
if (temp_array[i] == NULL)
return (NULL);
}
for (i = 0; i < height; i++)
for (; j < width; j++)
temp_array[i][j] = 0;
return (temp_array);
}
