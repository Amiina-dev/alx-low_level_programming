#include "main.h"

/**
 * _islower - check the code for lower case letters
 * @c: parameter
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
