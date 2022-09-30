#include <stdio.h>

/**
 * main - write a program that prints its name followed by a new line. If the file is renamed, it will print the new name
 * without compiling again. You should remove the path before the name of the program.
 *
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
