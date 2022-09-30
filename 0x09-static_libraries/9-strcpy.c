#include "main.h"

/**
 * _strcpy - function that copies the string to be printed
 * @dest: point
 * @src: point
 * Return: to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
