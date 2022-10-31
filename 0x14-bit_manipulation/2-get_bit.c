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
	if (index >= (sizeof(unsigned long in) * 8))
		return (-1);

	if((n & (1 << index)) == 0)
		return (0);

	return (1);
}
