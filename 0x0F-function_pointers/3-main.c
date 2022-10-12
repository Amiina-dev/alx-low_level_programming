#include "3-calc.h"

/**
 * main - when user runs main,
 * user should give two integers and an operator and
 * main will calculate the math via a function pointer.
 * prints sum, difference, product, dividend, or remainder
 * @argc: arguement counter
 * @argv: arguements
 * Return: Error if no of arg is wrong
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char s;

	/* validate input*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* check if theres only one operator */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' &&
		s != '-' &&
		s != '/' &&
		s != '*' &&
		s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\\n", res);
	return (0);
}
