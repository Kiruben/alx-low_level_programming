#include <stdio.h>
/**
 *main - Entry point
 *Description - prints all possible combos of two
 *two-digit numbers
 *Return - Always 0 (success)
 */
int main(void)
{
int first_num, second_num;
first_num = 0;
while (first_num <= 98)
{
second_num = first_num + 1;
while (second_num <= 99)
{
putchar((first_num / 10) + '0');
putchar((first_num % 10) + '0');
putchar(' ');
putchar((second_num / 10) + '0');
putchar((second_num % 10) + '0');
if (first_num == 98 && second_num == 99)
{
break;
}
putchar(',');
putchar(' ');
second_num++;
}
first_num++;
}
putchar('\n');
return (0);
}
