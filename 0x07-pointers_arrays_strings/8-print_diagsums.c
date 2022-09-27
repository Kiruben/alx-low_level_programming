#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prototype function
 *Description: a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int i;
int max;
int diag_left_to_right;
int diag_right_to_left;
diag_left_to_right = 0;
diag_right_to_left = 0;
max = size * size;
for (i = 0; i < max; i += size + 1)
{
diag_left_to_right += a[i];
}
for (i = size - 1; i < max - 1; i += size - 1)
{
diag_right_to_left += a[i];
}
printf("%d, %d\n", diag_left_to_right, diag_right_to_left);
}
