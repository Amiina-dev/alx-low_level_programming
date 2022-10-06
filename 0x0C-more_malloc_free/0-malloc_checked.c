#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc
 * @b: size of memory to be allocated.
 * Return: pointer allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
