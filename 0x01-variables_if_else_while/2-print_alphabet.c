#include <stdio.h>
/*
* main - Prints alphabet in lowercase
*
*Return: Always 0 (Success)
*/
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
