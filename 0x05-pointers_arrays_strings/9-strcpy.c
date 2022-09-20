/**
 *_strcpy - prototype function
 *@dest: buffer for src string
 *@src: src string to be copied
 *Description: copies src string to buffer
 *Return: copy of str which is dest
 */
char *_strcpy(char *dest, char *src)
{
int size;
int i;
size = 0;
while (src[size] != '\0')
{
size++;
}
for (i = 0; i < size && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < size; i++)
{
dest[i] = '\0';
}
return (dest);
}
