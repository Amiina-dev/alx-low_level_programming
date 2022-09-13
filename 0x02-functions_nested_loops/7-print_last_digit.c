#include "main.h"

/**
 *print_last_digit - prints last digit
 *@n: arguement to be checked
 *Return: last digit
 */

int _print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + (n % 10));
	_putchar('\n');

	return (n % 10);
}
