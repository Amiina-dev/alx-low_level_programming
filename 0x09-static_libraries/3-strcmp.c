#include "main.h"

/**
 * _strcmp - comparestwo strings
 * @s1: first string
 * @s2: secong string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		result = *s1 - *s2;

	return (result);
}
