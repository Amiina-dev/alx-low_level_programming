#include "main.h"

/**
 * _strlen - length of a string
 * @s: input
 * Return: lenght
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
