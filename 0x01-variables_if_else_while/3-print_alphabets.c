#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints alphabet in lowercase then in uppercase followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch_lowercase;
char ch_uppercase;
ch_lowercase = 'a';
ch_uppercase = 'A';
while (ch_lowercase <= 'z')
{
putchar(ch_lowercase);
ch_lowercase++;
}
while (ch_uppercase <= 'Z')
{
putchar(ch_uppercase);
ch_uppercase++;
}
putchar('\n');
return (0);
}
