#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of characters
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*dest)
		i++;

	for (i = 0; i < n; i++)
	{
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	return (dest);
}
