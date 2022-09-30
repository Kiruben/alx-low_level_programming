#include <stdio.h>
/**
 * main - entry point
 * Description - prints name of program
 * @argc: number of arguments in argv
 * @argv: where arguments are stored
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
if (argc >= 1)
printf("%s\n", argv[0]);
return (0);
}
