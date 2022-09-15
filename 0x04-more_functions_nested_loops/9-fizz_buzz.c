#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 *Description: prints fizz if multiple of 3
 *prints buzz if multiple of 5
 *prints fizzbuzz if multiple of 3 & 5
 * Return: Always 0
 */
int main(void)
{
int num;
for (num = 1; num < 100 ; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz ");
}
else if (num % 3 == 0)
{
printf("Fizz ");
}
else if (num % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", num);
}
}
printf("Buzz\n");
return (0);
}
