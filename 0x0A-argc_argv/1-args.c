#include <stdio.h>
/**
 * main - entry point
 * Description - number of arguments passed
 * @argc: number of arguments in argv
 * @argv: where arguments are stored
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
if (argv[1] == NULL)
printf("%d\n", 0);
else
printf("%d\n", argc - 1);
return (0);
}
