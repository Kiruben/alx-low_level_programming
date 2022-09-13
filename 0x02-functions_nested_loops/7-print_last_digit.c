#include "main.h"
/**
 *print_last_digit - prototype function
 *@num: number to evaluate
 *Description: prints last digit of num
 *Return: value of last digit
 */
int print_last_digit(int num)
{
int digit;
if (num < 0)
{
digit = (num % 10) * -1;
}
else
{
digit = num % 10;
}
_putchar((digit % 10) + '0');
return (digit % 10);
}
