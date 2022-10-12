#include <stdlib.h>

/**
 * print_name - prints a persons name
 * @name: name to be printed
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
