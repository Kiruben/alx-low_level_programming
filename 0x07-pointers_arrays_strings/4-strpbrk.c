/**
 * _strpbrk -  prototype function
 * @s: an input string
 * @accept: an input character to find in s
 *Description: searches a string for any of a set of bytes
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
char *temp_accept = accept;
while (*s)
{
while (*accept)
{
if (*s == *accept)
{
return (s);
}
accept++;
}
s++;
accept = temp_accept;
}
return ("NULL");
}
