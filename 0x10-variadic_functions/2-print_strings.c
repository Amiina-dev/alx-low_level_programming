#include "variadic_functions.c"
#include <stdarg.h>
#include <stdio.h>

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

	if (n > 0)
	{
		va_start(strings, n);
		for (i = 1; i < n; i++)
		{
			s = va_arg(strings, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);

			if (i != n && seperator != NULL)
			{
				printf("%s", seperator);
			}
		}
		va_end(strings);
	}
	printf("\n");
}
