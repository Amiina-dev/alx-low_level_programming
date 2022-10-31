#include "main.h"

/**
 * get_bit -gets the value f a bit at a given index.
 * @n: the bit
 * @index: the index of the value 
 *
 * Return: if error, -1
 * else, the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);

	return (bit & 1);
}
