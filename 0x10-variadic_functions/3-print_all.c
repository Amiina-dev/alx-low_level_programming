#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "vaiadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of all arguements passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s, *seperator;

	va_start(args, format);

	seperator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", seperator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", seperator, s);
				break;
			default:
				i++;
				continue;
		}
		seperator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
