#include "main.h"

/**
 *print_last_digit - prints last digit
 *@n: arguement to be checked
 *Return: last digit
 */

int print_last_digit(int n)
{
	int b;
	if (n < 0)
	{
		n = -n;
		a = n % 10;
	}
	if (n < 0)
	{
		a = -a;
		_putchar(a + '0');
	}
	_putchar('\n');
	return (a);
}
