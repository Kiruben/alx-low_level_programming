/**
 * _memset - prototype function
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 *Decription: a function that fills memory with a constant byte
 * Return: returns temp - pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
char *temp = s;
while (n--)
{
*s = b;
s++;
}
return (temp);
}
