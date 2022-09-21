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
int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
