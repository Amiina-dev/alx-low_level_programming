#include "main.h"

/**
 *print_alphabet_x10 - prints x10 the alphabets in lower case and a new line
 *Return: Always 0 (Success)
 */

 void print_alphabet_x10(void)
{
	char alphab;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab);
		}
		_putchar('\n');
	}
}
