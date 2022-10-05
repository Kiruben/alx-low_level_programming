#include "main.h"
#include <stdlib.h>
/**
 * str_concat - prototype function
 *Description: A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
char *new_str, *temp_s1, *temp_s2;
int count = 0, size_s1 = 0, size_s2 = 0;
temp_s1 = s1;
temp_s2 = s2;
if (s1 == NULL)
s1 = "";
while (*s1)
{
size_s1++;
s1++;
}
s1 = temp_s1;
if (s2 == NULL)
s2 = "";
while (*s2)
{
size_s2++;
s2++;
}
s2 = temp_s2;
new_str = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
temp_s1 = new_str;
if (new_str == NULL)
return (NULL);
for (; count < (size_s1 + size_s2); count++)
{
if (count < size_s1)
{
new_str[count] = *s1;
s1++;
}
else
{
new_str[count] = *s2;
s2++;
}
}
new_str[count] = '\0';
return (temp_s1);
}
