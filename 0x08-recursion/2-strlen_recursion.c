#include "main.h"
/**
 *_strlen_recursion - prototype function
 *Description: return length of string
 *@s: string to count
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(++s));
}
else
{
return (0);
}
}
