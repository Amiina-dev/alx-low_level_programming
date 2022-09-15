#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if not uppercase
 */

void _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
