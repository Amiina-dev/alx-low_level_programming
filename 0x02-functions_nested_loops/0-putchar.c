#include "main.h"

/**
 *main - prints _putchar followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	char abc[] = "_putchar";

	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar(abc[b]);
	}
	_putchar('\n');

	return (0);
}
