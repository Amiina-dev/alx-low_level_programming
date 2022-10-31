#include <unistd.h>

/**
 * _putchar - qrites the character c to stdout
 * @c: char to be printed
 *
 * Return: on success, 1
 * else, -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
