/**
 *_strlen - prototype function
 *@s: string to count
 *Decription: counts and return length of string
 *Return: returns length of string
 */
int _strlen(char *s)
{
int size;
size = 0;
while (*(s + size) != '\0')
{
size++;
}
return (size);
}
