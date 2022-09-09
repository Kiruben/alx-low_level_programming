#include <stdio.h>
/**
 * main -Entry point
 *Decription: Prints all possible
 *combinations of 2 numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
int first_num, second_num;
first_num = '0';
while (first_num <= '8')
{
second_num = first_num + 1;
while (second_num <= '9')
{
putchar(first_num);
putchar(second_num);
putchar(',');
putchar(' ');
second_num++;
}
first_num++;
}
putchar('\n');
return (0);
}
