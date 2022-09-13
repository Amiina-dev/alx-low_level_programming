#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: value to be computed
 *Return: Absolute value
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (+n);
	}
	_putchar('\n');
}
