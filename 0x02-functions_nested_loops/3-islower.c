#include "main.h"

/**
 *_islower - check for lowercase
 *@c: character to be checked
 *Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
