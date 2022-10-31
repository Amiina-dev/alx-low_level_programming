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
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
