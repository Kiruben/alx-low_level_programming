#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * Description - adds arguments
 * @argc: number of arguments in argv
 * @argv: where arguments are stored
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
int num;
int total;
int count;
while (argc-- > 1)
{
for (count = 0; argv[argc][count]; count++)
{
if (!(isdigit(argv[argc][count])))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[argc]);
total += num;
}
printf("%d\n", total);
return (0);
}
