#include <stdio.h>
/*
* main - prints alphabet in lowercase
*
*Desciption: Prints lowercase alphabet using while loop
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
