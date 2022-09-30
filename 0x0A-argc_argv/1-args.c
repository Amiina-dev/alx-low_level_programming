#include <stdio.h>

/**
 * main - print number of arguments passed to program
 * @args: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
