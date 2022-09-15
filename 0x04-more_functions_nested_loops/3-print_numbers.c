#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	char c = 0;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
