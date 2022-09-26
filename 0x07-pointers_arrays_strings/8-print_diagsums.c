#include "main.h"

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonalsumone = 0;
	int diagonalsumtwo = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonalsumone += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonalsumtwo += a[i];
	}

	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
