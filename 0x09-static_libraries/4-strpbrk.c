#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - strpbrk
 * @s: pointer
 * @accept: pointer
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			for (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
