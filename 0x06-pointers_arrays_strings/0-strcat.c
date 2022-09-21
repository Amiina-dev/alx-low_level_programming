#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	retutn 0(dest);
}
