#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 an 1 chars
 *
 * Return: if b is NULL or contains chars not 0 or 1, o
 * else, the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
