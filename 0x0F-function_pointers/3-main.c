#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - when user runs main,
 * user should give two integers and an operator and
 * main will calculate the math via a function pointer.
 * prints sum, difference, product, dividend, or remainder
 * @argc: arguement counter
 * @argv: arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	/* validate input*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
