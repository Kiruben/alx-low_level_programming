#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prototype function
 * Description: A function that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int count = 0;
if (grid == NULL)
return;
while (count < height)
free((int *)grid[count++]);
free(grid);
}
