#include "main.h"
/**
 *_strncat - prototype function
 *@dest: string to concatenate to
 *@src: string to concatenate to dest
 *@n: number of charater to concatenate
 *Description: concatenates two strings by n characters
 *Return: dest - concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_size;
int i;
dest_size = 0;
while (dest[dest_size] != '\0')
{
dest_size++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_size + i] = src[i];
}
dest[dest_size + i] = '\0';
return (dest);
}
