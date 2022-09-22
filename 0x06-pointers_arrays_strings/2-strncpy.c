#include "main.h"
/**
 *_strncpy - prototype function
 *@dest: string to copy to
 *@src: string that needs to be copied to dest
 *@n: number of characters to copy
 *Description: copy a string
 *Return: dest copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int src_size;
int i;
char *temp_src;
temp_src = src;
src_size = 0;
i = 0;
while (*src)
{
src_size++;
src++;
}
src_size++;
if (n > src_size)
{
n = src_size;
}
src = temp_src;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
