#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: value to be computed
 *Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	_putchar('\n');
}