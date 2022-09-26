/**
 * _memcpy - prototype function
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 *Description: a function that copies memory area
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *temp = dest;
while (n--)
{
*dest = *src;
src++;
dest++;
}
return (temp);
}
