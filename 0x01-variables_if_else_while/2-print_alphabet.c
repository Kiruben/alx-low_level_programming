#include <stdio.h>
/*
* main - Entry point
*
* Description: Prints out alphabet in lowercase
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
