#include <stdio.h>

/**
 * main - write a program that prints its name followed by a new line.
 * If the file is renamed, it will print the new name
 * without compiling again.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
