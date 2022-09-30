#include <stdio.h>
/**
 * main - entry point
 * Description - prints all arguments
 * @argc: number of arguments in argv
 * @argv: where arguments are stored
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
