/**
 *_strspn - prototype function
 *@s: string under evaluation
 *@accept: string to match
 *Description: gets the length of a prefix substring
 *Return: number of bytes as s
 */

unsigned int _strspn(char *s, char *accept)
{
int count;
char *temp_accept = accept;
int match;
count = 0;
while (*s)
{
match = 0;
while (*accept)
{
if (*accept == *s)
{
count++;
match = 1;
break;
}
accept++;
}
s++;
accept = temp_accept;
if (match == 0)
{
break;
}
}
return (count);
}
