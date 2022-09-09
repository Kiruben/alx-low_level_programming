#include <stdio.h>
/**
 * main -Entry point
 *Decription: Prints all possible
 *combinations of 3 numbers
 *Return: Always 0 (Success)
 */
int main(void)
{
int first_num, second_num, third_num;
first_num = '0';
while (first_num <= '7')
{
second_num = first_num + 1;
while (second_num <= '8')
{
third_num = second_num + 1;
while (third_num <= '9')
{
putchar(first_num);
putchar(second_num);
putchar(third_num);
if (first_num == '7' && second_num == '8')
{
break;
}
putchar(',');
putchar(' ');
third_num++;
}
second_num++;
}
first_num++;
}
putchar('\n');
return (0);
}
