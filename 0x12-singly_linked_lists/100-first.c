#include <stdio.h>

/**
 * first - function executed before main
 * Return: 0
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, yuo must allow");
	printf(",\nI bore my house upon my back!\n");
}
