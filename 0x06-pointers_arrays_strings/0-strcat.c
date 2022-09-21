#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j))
	{
		*(dest+i) = *(src+j);
		i++;
		j++;
	}
	*(dest+i) = '\0';

	return (dest);
}
