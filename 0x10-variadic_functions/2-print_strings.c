#include "variadic_functions.c"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a new line
 * @seperator: char to be printed between strings
 * @n: no of strings
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (seperator == NULL)
		seperator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(strings);
}
