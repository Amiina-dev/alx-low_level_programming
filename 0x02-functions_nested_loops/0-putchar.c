#include <stdio.h>

/**
 *main - prints _putchar followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	char aaaa[] = "_putchar";

	int b;

	for(b = 0; b < 8; b++)
	{
		_putchar(aaaa[b]);
	}
	_putchar('\n');

	return (0);
}
