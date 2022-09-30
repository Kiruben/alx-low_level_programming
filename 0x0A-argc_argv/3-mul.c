#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description - multiplies two arguments
 * @argc: number of arguments in argv
 * @argv: where arguments are stored
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
printf("%d\n", num1 * num2);
}
else
printf("Error\n");
return (0);
}
