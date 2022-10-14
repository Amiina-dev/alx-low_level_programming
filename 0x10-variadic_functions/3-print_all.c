#include <stdio.h>
#include <stdarg.h>
#include "vaiadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of all arguements passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, start = 0;
	va_list args;
	char *p;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{	case 'c':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				switch (start)
				{case 1: printf(", "); }
				start = 1;
				printf("%f", va_arg(args, double));
				break;
			case 's':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				s = va_arg(args, char *);
				if (p)
				{
					printf("%s", p);
					break;
				}
				printf("%p", p);
				break; }
		i++;
	}
	printf("\n");
	va_end(args);
}
