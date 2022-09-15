#include "main.h"

/**
 * print_triangle - print a triangle of a given size
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int height;
	int width;
	int tri;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');

		for (tri = 1; tri <= height; tri++)
			_putchar('#');

		_putchar('\n');
	}
}
