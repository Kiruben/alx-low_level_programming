#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - prototype function
 *Description: A function that concatenates two strings
 * @s1: pointer of the first string
 * @s2: pointer of the second string
 * @n: number of string to concatenate
 * Return: pointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *temp_str;
unsigned int count = 0, size_s1 = 0, size_s2 = 0;
if (s1 == NULL)
s1 = "";
while (s1[size_s1])
size_s1++;
if (s2 == NULL)
s2 = "";
while (s2[size_s2])
size_s2++;
if (n >= size_s2)
n = size_s2;
temp_str = malloc(size_s1 + n + 1);
if (temp_str == NULL)
return (NULL);
for (; count < (size_s1 + n); count++)
{
if (count < size_s1)
temp_str[count] = *s1, s1++;
else
temp_str[count] = *s2, s2++;
}
temp_str[count] = '\0';
return (temp_str);
}
