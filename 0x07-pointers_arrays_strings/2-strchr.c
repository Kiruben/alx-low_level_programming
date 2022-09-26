/**
 * _strchr - prototype function
 * @s: string to search
 * @c: character to locate
 *Description: locates a character in a string
 *Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}
return ("NULL");
}
