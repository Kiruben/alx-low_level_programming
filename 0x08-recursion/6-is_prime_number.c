#include "main.h"
/**
 *is_prime_number - prototype function
 *Description: checks if number is prime
 *@n: number to check if its prime
 *Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n <= 3)
{
return (1);
}
if (checkPrime(2, n) == 0)
{
return (1);
}
else
{
return (0);
}
}
/**
 *checkPrime - prototype function
 *Description: checks for prime
 *@i: dividing number
 *@num: sqaure root number
 *Return: 1 if num is divisible by i
 *0 if num not divisible by i
 */
int checkPrime(int i, int num)
{
if (num == i)
{
return (0);
}
else if (num % i == 0)
{
return (1);
}
else
{
return (checkPrime(i + 1, num));
}
}
