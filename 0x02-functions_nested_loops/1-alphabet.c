#include <main.h>

/**
 *main - prints the alphabets in lowercase followed by a new line
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar(' ');

	return (0);
}
