#include "main.h"
#include <stdio.h>

/**
 * main - print 1-100
 * multiples of 3 with fizz
 * multiples of 5 with buzz
 * multiples of 3 and 5 with fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0	&& i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
