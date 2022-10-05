#include "main.h"
#include <stdlib.h>

/**
 * _strdup - prototype function
 *Description: A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
int size;
int count;
char *temp_str;
char *new_str;
temp_str = str;
size = 0;
if (str == NULL)
{
return (NULL);
}
while (*str)
{
size++;
str++;
}
str = temp_str;
new_str = malloc((size + 1) * sizeof(char));
temp_str = new_str;
if (new_str == NULL)
{
return (NULL);
}
for (count = 0; count < size; count++)
{
new_str[count] = str[count];
}
new_str[count] = '\0';
return (temp_str);
}
