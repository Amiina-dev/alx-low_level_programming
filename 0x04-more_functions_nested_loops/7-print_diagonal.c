#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal 
 * @n: number of times to print \ character
 */

void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
