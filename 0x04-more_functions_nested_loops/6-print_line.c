#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: number of times to print _ character
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
